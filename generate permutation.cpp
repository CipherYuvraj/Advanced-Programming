#include <iostream>
#include <vector>

using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;

        if (n % 2 == 1) {
            vector<int> p(n);
            int left = 1, right = n;
            for (int i = 0; i < n; i += 2) {
                p[i] = left++;
                p[i + 1] = right--;
            }
            for (int i = 0; i < n; i++) {
                cout << p[i] << " ";
            }
            cout << endl;
        } else {
            cout << -1 << endl;
        }
    }
    return 0;
}