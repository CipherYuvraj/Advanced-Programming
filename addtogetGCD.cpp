#include <iostream>
using namespace std;

int gcd(int a, int b) {
    while (b) {
        a %= b;
        swap(a, b);
    }
    return a;
}

void solve() {
    int x, y;
    cin >> x >> y;

    if (gcd(x, y) > 1) {
        cout << 0 << '\n';
    } else if (gcd(x + 1, y) > 1 || gcd(x, y + 1) > 1) {
        cout << 1 << '\n';
    } else {
        cout << 2 << '\n';
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        solve();
    }

    return 0;
}
