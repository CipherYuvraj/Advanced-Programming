#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int T;
    if (!(cin >> T)) return 0;

    while (T--) {
        int N;
        cin >> N;
        vector<int> A(N);
        int mx = 0;

        for (int &x : A) {
            cin >> x;
            mx = max(mx, x);
        }

        long long best = 0;

        for (int X = 0; X <= mx; ++X) {
            long long sold = 0;
            for (int a : A) {
                sold += min(X, a);
            }
            long long profit = 50LL * sold - 30LL * X * N;
            best = max(best, profit);
        }

        cout << best << '\n';
    }

    return 0;
}
