#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n, m;
    cin >> n >> m;

    vector<string> matrix(n);
    vector<int> rowCount(n, 0), colCount(m, 0);
for (int i = 0; i < n; i++) {
        cin >> matrix[i];
        for (int j = 0; j < m; j++) {
            if (matrix[i][j] == '1') {
                rowCount[i]++;
                colCount[j]++;
            }
        }
    }

    int oddRows = 0, oddCols = 0;
for (int i = 0; i < n; i++) {
        if (rowCount[i] % 2 == 1) oddRows++;
    }
    for (int j = 0; j < m; j++) {
        if (colCount[j] % 2 == 1) oddCols++;
    }
    cout << max(oddRows, oddCols) << endl;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}
