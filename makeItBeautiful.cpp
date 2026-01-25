#include <bits/stdc++.h>
using namespace std;
using ll = long long;

ll get_beauty(const vector<ll>& arr) {
    ll beauty = 0;
    for (ll num : arr) beauty += __builtin_popcountll(num);
    return beauty;
}

ll next_gain(ll val) {
    return (val | (val + 1)) - val;
}

void process_case(int n, ll k, vector<ll>& arr) {
    ll base_beauty = get_beauty(arr);
    ll extra = 0;

    vector<bool> visited(n, false);
    vector<ll> flags(n, 0);
    vector<int> dp(n + 1, -1);

    priority_queue<pair<ll, int>, vector<pair<ll, int>>, greater<>> q;
    for (int idx = 0; idx < n; ++idx) {
        ll inc = next_gain(arr[idx]);
        if (inc > 0) {
            q.emplace(inc, idx);
            flags[idx] = inc;
        }
    }

    while (!q.empty()) {
        auto [cost, id] = q.top(); q.pop();
        if (cost > k) break;
        if (visited[id]) continue;
        visited[id] = true;
        k -= cost;
        extra++;
        arr[id] += cost;

        dp[id] = arr[id] % 1337;

        ll new_cost = next_gain(arr[id]);
        if (new_cost > 0) {
            q.emplace(new_cost, id);
            flags[id] = new_cost;
            visited[id] = false;
        }
    }

    cout << (base_beauty + extra) << '\n';
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int T; cin >> T;
    vector<ll> input_array;
    while (T--) {
        int sz; ll operations;
        cin >> sz >> operations;
        input_array.resize(sz);
        for (int i = 0; i < sz; ++i) cin >> input_array[i];
        process_case(sz, operations, input_array);
    }

    return 0;
}
