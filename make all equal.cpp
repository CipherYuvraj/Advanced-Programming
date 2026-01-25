#include <iostream>
#include <vector>
#include <algorithm>

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
        vector<int> freq(101, 0);
        for (int i = 0; i < n; i++) {
            freq[a[i]]++;
        }
        int max_freq = *max_element(freq.begin(), freq.end());

        cout << n - max_freq << endl;
    }
    return 0;
}