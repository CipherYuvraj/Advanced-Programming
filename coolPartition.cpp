#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;
        vector<int> a(n);
        unordered_map<int, int> last_occurrence;

        for (int i = 0; i < n; i++) {
            cin >> a[i];
            last_occurrence[a[i]] = i; // Store last occurrence of each value
        }

        int segments = 0;
        int max_last = 0;

        for (int i = 0; i < n; i++) {
            max_last = max(max_last, last_occurrence[a[i]]);
            if (i == max_last) {
                segments++; // We can end a segment here
            }
        }

        cout << segments << '\n';
    }

    return 0;
}
