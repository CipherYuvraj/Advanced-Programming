#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    int t;
    cin>>t;
    while(t--){
        int n,count_odd=0,count_even = 0;
        cin>>n;
        vector<ll>a(n);
        multiset<int>odd,even;
        for(ll i = 0;i<n;i++){
            cin>>a[i];
        }
        for(ll i = 0;i<n;i++){
            if(a[i]%2!=0){
                odd.insert(a[i]);
                count_odd++;
            }else{
                even.insert(a[i]);
                count_even++;
            }
        }
        
        int ans = even.size();
        int mx_o  = *(odd.rbegin());
        
        if(even.size()==0||odd.size()==0){
            cout<<0<<endl;
            
        }
        else{
         for(int i:even){
            if(i<mx_o){
                mx_o+=i;
            }else{
                ans++;
                break;
            }
         }
        }
        cout<<ans<<endl;
        
    }
}
