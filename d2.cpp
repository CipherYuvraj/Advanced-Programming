#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;

#define fastio ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
#define pb push_back
#define nl '\n'

const int MAXN = 2e5 + 10;

vi adj[MAXN], level[MAXN], groups[MAXN];
int parent[MAXN], ans[MAXN];
int n, cnt;

void dfs(int u, int p, int depth){
    parent[u] = p;
    level[depth].pb(u);

    for(int v : adj[u]){
        if(v == p) continue;
        dfs(v, u, depth + 1);
    }
}

void solve() {
    cin >> n;

    for(int i = 1; i <= n; i++){
        adj[i].clear();
        level[i].clear();
        groups[i].clear();
    }

    for(int i = 1; i < n; i++){
        int x, y;
        cin >> x >> y;
        adj[x].pb(y);
        adj[y].pb(x);
    }

    dfs(1, 0, 1);

    cnt = 0;

    for(int i = 1; i <= n; i++){
        if(level[i].empty()) break;

        for(int j = 0; j < level[i].size(); j++)
            ans[level[i][j]] = j + 1;

        for(int j = 0; j + 1 < level[i].size(); j++)
            if(ans[level[i][j]] == ans[parent[level[i][j]]])
                swap(ans[level[i][j]], ans[level[i][j+1]]);

        for(int j = level[i].size() - 1; j > 0; j--)
            if(ans[level[i][j]] == ans[parent[level[i][j]]])
                swap(ans[level[i][j]], ans[level[i][j-1]]);

        if(ans[level[i][0]] == ans[parent[level[i][0]]])
            ans[level[i][0]] = level[i].size() + 1;
    }

    for(int i = 1; i <= n; i++){
        cnt = max(cnt, ans[i]);
        groups[ans[i]].pb(i);
    }

    cout << cnt << nl;
    for(int i = 1; i <= cnt; i++){
        cout << groups[i].size() << " ";
        for(int x : groups[i]) cout << x << " ";
        cout << nl;
    }
}

int main() {
    fastio;

    int tc;
    cin >> tc;
    while(tc--){
        solve();
    }

    return 0;
}
