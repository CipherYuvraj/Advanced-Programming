#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define N 10005
#define M 20005 // Max states for Suffix Automaton (2 * |Y|)
#define INF 1000000000

// DP state: c = chunks, f = factor
typedef struct {
    int c, f;
} P;

P dp[N];
char x[N], y[N], ry[N];
int s, r;

// Suffix Automaton node: l = len, p = link
typedef struct {
    int l, p; 
    int n[26];
} S;

S sy[M], sry[M];
int ssz, sl, rsz, rl; // size and last node for SAMs

// Initialize SAM
void si(S* sam, int* sz, int* last) {
    *sz = 1;
    *last = 0;
    sam[0].l = 0;
    sam[0].p = -1;
    memset(sam[0].n, 0, sizeof(sam[0].n));
}

// Extend SAM with a new character
void se(S* sam, int* sz, int* last, int c) {
    int cur = (*sz)++;
    sam[cur].l = sam[*last].l + 1;
    memset(sam[cur].n, 0, sizeof(sam[cur].n));

    int p = *last;
    for (; p != -1 && !sam[p].n[c]; p = sam[p].p) {
        sam[p].n[c] = cur;
    }

    if (p == -1) {
        sam[cur].p = 0;
    } else {
        int q = sam[p].n[c];
        if (sam[q].l == sam[p].l + 1) {
            sam[cur].p = q;
        } else {
            int cl = (*sz)++;
            sam[cl].l = sam[p].l + 1;
            sam[cl].p = sam[q].p;
            memcpy(sam[cl].n, sam[q].n, sizeof(sam[cl].n));
            for (; p != -1 && sam[p].n[c] == q; p = sam[p].p) {
                sam[p].n[c] = cl;
            }
            sam[q].p = sam[cur].p = cl;
        }
    }
    *last = cur;
}

// Compare two DP states (true if n is better than o)
int better(P n, P o) {
    if (n.c < o.c) return 1;
    if (n.c == o.c && n.f < o.f) return 1;
    return 0;
}

int main() {
    scanf("%s %s %d %d", x, y, &s, &r);
    int n = strlen(x);
    int m = strlen(y);

    // Build SAM for Y
    si(sy, &ssz, &sl);
    for (int i = 0; i < m; i++) se(sy, &ssz, &sl, y[i] - 'a');

    // Build SAM for reversed Y
    for (int i = 0; i < m; i++) ry[i] = y[m - 1 - i];
    ry[m] = '\0';
    si(sry, &rsz, &rl);
    for (int i = 0; i < m; i++) se(sry, &rsz, &rl, ry[i] - 'a');

    // DP initialization
    for (int i = 1; i <= n; i++) dp[i] = (P){INF, INF};
    dp[0] = (P){0, 0};

    // DP calculation
    for (int i = 0; i < n; i++) {
        if (dp[i].c == INF) continue;

        // Match substrings in Y
        int cur = 0;
        for (int j = i; j < n; j++) {
            int c = x[j] - 'a';
            if (!sy[cur].n[c]) break;
            cur = sy[cur].n[c];
            P nv = {dp[i].c + 1, dp[i].f + s};
            if (better(nv, dp[j + 1])) {
                dp[j + 1] = nv;
            }
        }

        // Match substrings in reversed Y
        cur = 0;
        for (int j = i; j < n; j++) {
            int c = x[j] - 'a';
            if (!sry[cur].n[c]) break;
            cur = sry[cur].n[c];
            P nv = {dp[i].c + 1, dp[i].f + r};
            if (better(nv, dp[j + 1])) {
                dp[j + 1] = nv;
            }
        }
    }

    if (dp[n].c == INF) {
        printf("Impossible\n");
    } else {
        printf("%d\n", dp[n].f);
    }

    return 0;
}