#include<bits/stdc++.h>
using namespace std;
const int N = 1e5+5;

int main() {
    int t;
    cin >> t;
    while(t--) {
        unordered_map<char,int> hash;
        int a, b;
        cin >> a >> b;
        string s;
        cin >> s;
        
        // Count character frequencies
        for(int i = 0; i < a; i++) {
            hash[s[i]]++;
        }
        
        int size = a - b;  // Length after removing characters
        int count = 0;     // Count of characters with odd frequency
        
        for(auto pair : hash) {
            if(pair.second % 2 != 0) {
                count++;
            }
        }
        
        // For palindromes:
        // If remaining length is even: all chars must have even frequency
        // If remaining length is odd: exactly one char must have odd frequency
        
        if(count <= b) {
            // We can eliminate 'count' odd-frequency chars
            int remaining_removals = b - count;
            
            // Remaining removals must be even (to maintain even frequencies)
            if(remaining_removals % 2 == 0) {
                cout << "YES" << endl;
            } else {
                // If we have odd number of remaining removals
                // We need to make one even-frequency char have odd frequency
                // But only if size is odd
                if(size % 2 == 1) {
                    cout << "YES" << endl;
                } else {
                    cout << "NO" << endl;
                }
            }
        } else {
            // We can't eliminate all odd-frequency chars
            // For odd-length result: we need exactly one odd-frequency char
            if(size % 2 == 1 && count - b == 1) {
                cout << "YES" << endl;
            } else {
                cout << "NO" << endl;
            }
        }
    }
    return 0;
}