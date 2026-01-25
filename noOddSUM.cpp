#include <bits/stdc++.h>
using namespace std;

#define fastio ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
typedef pair<int, int> pii;
bool is_good(int c1, int c2) {
    return c1 == 0 || c2 == 0;
}

void solve() {
    int n;
    cin >> n;
    
    int count1 = 0, count2 = 0;
    for (int i = 0; i < n; ++i) {
        int val;
        cin >> val;
        if (val == 1) count1++;
        else count2++;
    }
    queue<pii> q;
    map<pii, int> dist;

    auto start = make_pair(count1, count2);
    q.push(start);
    dist[start] = 0;

    while (!q.empty()) {
        auto [ones, twos] = q.front();
        q.pop();

        int d = dist[{ones, twos}];

        if (is_good(ones, twos)) {
            cout << d << '\n';
            return;
        }
        if (ones >= 2) {
            int new_ones = ones - 2;
            int new_twos = twos + 1;
            pii next = {new_ones, new_twos};
            if (!dist.count(next)) {
                dist[next] = d + 1;
                q.push(next);
            }
        }
        if (twos >= 1) {
            int new_ones = ones + 2;
            int new_twos = twos - 1;
            pii next = {new_ones, new_twos};
            if (!dist.count(next)) {
                dist[next] = d + 1;
                q.push(next);
            }
        }
    }
}

int main() {
    fastio;
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}
