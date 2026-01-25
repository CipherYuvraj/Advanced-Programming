#include <bits/stdc++.h>
using namespace std;

// int maxOperations(int l, int r) {
//     vector<int> numbers;
//     for (int i = l; i <= r; i++) {
//         numbers.push_back(i);
//     }

//     int operations = 0;
//     unordered_set<int> numSet(numbers.begin(), numbers.end());
//     sort(numbers.begin(), numbers.end());
//     vector<int> available = numbers;

//     while (available.size() >= 3) {
//         bool found = false;
//         for (int i = 0; i <= available.size(); i++) {
//             if (found) break;
//             for (int j = i + 1; j <= available.size() ; j++) {
//                 if (found) break;
//                 for (int k = j + 1; k <= available.size(); k++) {
//                     int a = available[i];
//                     int b = available[j];
//                     int c = available[k];
//                     if (__gcd(a, b) == 1 && __gcd(b, c) == 1 && __gcd(a, c) == 1) {
//                         numSet.erase(a);
//                         numSet.erase(b);
//                         numSet.erase(c);
//                         operations++;
//                         found = true;
//                         break;
//                     }
//                 }
//             }
//         }
//         available.assign(numSet.begin(), numSet.end());
//         if (!found) break;
//     }

//     return operations;
// }

// int main() {
//     int t;
//     cin >> t;
//     while (t--) {
//         int l, r;
//         cin >> l >> r;
//         cout << maxOperations(l, r) << endl;
//     }

   
// }

int main(){
    int t;
    cin>>t;
    while(t--){
        int l,r;
        cin>>l>>r;
        int cnt  = 0;r
        for(int i = l;i<=;i++){
            if( i%2)cnt++;
        }
        cout<<(cnt>>1)<<endl;
    }
}