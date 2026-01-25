#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void solve() {
    int n;
    long long k;
    cin >> n >> k;
    vector<long long> a(n);
    long long sum = 0;
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
        sum += a[i];
    }

    sort(a.begin(), a.end());
    long long x = a[0], y = a[1];
    long long added = (x + y + ((x % 2 != y % 2) ? 1 : 0)) / 2;
    sum += k * added;
    cout << sum << '\n';
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        solve();
    }

    return 0;
}
