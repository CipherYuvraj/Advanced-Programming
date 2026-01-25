#include <iostream>
#include <vector>
using namespace std;

// Function to create a sieve of prime numbers up to a maximum value
vector<bool> sieve(int max_num) {
    vector<bool> is_prime(max_num + 1, true);
    is_prime[0] = is_prime[1] = false; // 0 and 1 are not prime numbers

    for (int i = 2; i * i <= max_num; i++) {
        if (is_prime[i]) {
            for (int j = i * i; j <= max_num; j += i) {
                is_prime[j] = false;
            }
        }
    }
    return is_prime;
}

int main() {
    int t;
    cin >> t;

    // Maximum possible sum of any two elements in the array
    const int MAX_SUM = 200;
    
    // Precompute prime numbers up to the maximum possible sum
    vector<bool> is_prime = sieve(MAX_SUM);

    while (t--) {
        int n;
        cin >> n;

        vector<int> arr(n);

        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }

        bool found = false;
        for (int i = 0; i < n && !found; i++) {
            for (int j = i + 1; j < n; j++) {
                int sum = arr[i] + arr[j];
                if (!is_prime[sum]) {
                    // Print the indices in 1-based format
                    cout << i + 1 << " " << j + 1 << endl;
                    found = true;
                    break;
                }
            }
        }

        if (!found) {
            cout << -1 << endl;
        }
    }

    return 0;
}
