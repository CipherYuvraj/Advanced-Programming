// #include <bits/stdc++.h>
// using namespace std;
// int main(){
//     int t;
//     cin>>t;
//     while(t--){
//         int n;
//         cin>>n;
//         vector<int>a(n);
//         for(int i = 0;i<n;i++){
//             cin>>a[i];
//         }
//         for(int i = 0;i<n;i++){
//             for(int  j =i;j>=0;j--){
//                 if((a[i]-1)==a[j]||(a[i]+1)==a[j]){
//                     cout<<"YES"<<endl;
//                     break;

//                 }
//                 else{

//                     cout<<"NO"<<endl;
//                     break;
//                 }
//             }
//         }
//     }
// }
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

        
        set<int> occupied;
        bool valid = true;

        for (int i = 0; i < n; i++) {
            int seat = a[i];
            
           
            if (i == 0) {
                occupied.insert(seat);
            } else {
              
                if (occupied.count(seat - 1) == 0 && occupied.count(seat + 1) == 0) {
                    valid = false;
                    break;
                }
              
                occupied.insert(seat);
            }
        }

     
        if (valid) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }

    return 0;
}
