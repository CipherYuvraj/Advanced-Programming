#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, k;
        cin >> n >> k;
        vector<int> arr(n);
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }

        while (k--) {
            // Find maximum and minimum elements
            int max_element_in_arr = *max_element(arr.begin(), arr.end());
            int min_element_in_arr = *min_element(arr.begin(), arr.end());

            // Remove only one occurrence of each element
            arr.erase(find(arr.begin(), arr.end(), max_element_in_arr));
            arr.erase(find(arr.begin(), arr.end(), min_element_in_arr));

            // Add their sum to the end
            arr.push_back(max_element_in_arr + min_element_in_arr);
        }

        for (int i : arr) {
            cout << i << " ";
        }
        cout << endl;
    }
    return 0;
}