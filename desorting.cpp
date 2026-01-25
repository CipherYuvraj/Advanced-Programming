#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> a(n);
        
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }

        // Check for already unsorted
        bool is_sorted = true;
        for (int i = 0; i < n - 1; i++) {
            if (a[i] > a[i + 1]) {
                is_sorted = false;
                break;
            }
        }

        if (!is_sorted) {
            cout << 0 << endl;
            continue;
        }

        // Find the smallest difference between consecutive elements
        int min_diff = INT_MAX;
        for (int i = 0; i < n - 1; i++) {
            min_diff = min(min_diff, a[i + 1] - a[i]);
        }

        // We need at least (min_diff + 2) / 2 operations to make the array unsorted
        cout << (min_diff + 2) / 2 << endl;
    }
    return 0;
}
