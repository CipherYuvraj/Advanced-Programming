// #include<bits/stdc++.h>
// using namespace std;
// #define ll long long
// int main(){
//     int t;
//     cin>>t;
//     while(t--){
//         ll n,s,m;
//         cin>>n>>s>>m;
//         pair<int,int>p[n];
//         for(int i =0;i<n;i++){
//             cin>>p[i].first>>p[i].second;
//         }
       
// // for(int i =0;i<n;i++){
// //     cout<<p[i].first<<" "<<p[i].second<<endl;     
// //     }
    

        
  
//     for(int i =1;i<=n;i++){
//         if(p[0].first>=s){
//         cout<<"YES"<<endl;
//         break;
        
//     }
//         else if((p[i].first-p[i-1].second)>=s){
//             cout<<"YES"<<endl;
//             break;
//         }
//         else if(m-p[n-1].second>=s ){
//             cout<<"YES"<<endl;
//             break;
//         }else{
//             cout<<"NO"<<endl;
//             break;
//         }
//     }
//     }
    

    
    
    
    


// }
#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    int t;
    cin >> t;
    while(t--){
        ll n, s, m;
        cin >> n >> s >> m;
        vector<pair<int, int>> p(n);
        for(int i = 0; i < n; i++){
            cin >> p[i].first >> p[i].second;
        }
        
        bool canShower = false;
        
      
        if (p[0].first >= s) {
            canShower = true;
        }
    
        for (int i = 1; i < n; i++) {
            if (p[i].first - p[i - 1].second >= s) {
                canShower = true;
                break;
            }
        }
        if (m - p[n - 1].second >= s) {
            canShower = true;
        }
        
        if (canShower) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }
    return 0;
}

