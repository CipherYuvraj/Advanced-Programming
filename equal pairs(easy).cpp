#include <bits/stdc++.h>
using namespace std;

int countPairs(vector<int>& arr) {
    unordered_map<int, int> freq;
    
    // Count frequency of each element
    for (int num : arr) {
        freq[num]++;
    }
    
    int totalPairs = 0;
    
    // Calculate the number of pairs for each element
    for (auto& entry : freq) {
        int f = entry.second;
        if (f > 1) {
            totalPairs += (f * (f - 1)) / 2;
        }
    }
    
    return totalPairs;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> arr(n);
        int count = 0;

        // Input array elements and count zeroes
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
            if (arr[i] == 0) {
                count++;
            }
        }

        // If all elements are zero, replace them with 1
        if (count == n) {
            fill(arr.begin(), arr.end(), 1);
        } else {
            // Find the maximum element to size the hash array properly
            int max_element_in_arr = *max_element(arr.begin(), arr.end());

            vector<int> hash(max_element_in_arr + 1, 0);

            // Fill the hash array
            for (int i = 0; i < n; i++) {
                if (arr[i] != 0) {
                    hash[arr[i]]++;
                }
            }

            // Find the index of the maximum value in the hash array, ignoring zeros
            int max_index = -1;
            int max_count = 0;
            for (int i = 1; i <= max_element_in_arr; i++) {
                if (hash[i] > max_count) {
                    max_count = hash[i];
                    max_index = i;
                }
            }

            // Replace all zeroes in arr with max_index
            for (int i = 0; i < n; i++) {
                if (arr[i] == 0) {
                    arr[i] = max_index;
                }
            }
        }

        // Output the modified array
        // for (int i : arr) {
        //     cout << i << " ";
        // }
        // cout << endl;
        cout<<countPairs(arr)<<endl;
    }
}
