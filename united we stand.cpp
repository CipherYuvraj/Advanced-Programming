#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<ll>a(n);
        
        for(int i =0;i<n;i++){
            cin>>a[i];
        }
        sort(a.begin(),a.end());
        int count = 0;
        int min_val = a[0];
        for(int i = 0;i<n;i++){
            if(a[i] == min_val){
                count++;
            }
        }
        if(count==n){
            cout<<-1<<endl;
        }else{
            cout<<count<<" "<<n-count<<endl;
            for(int i = 0;i<count;i++){
                cout<<a[i]<<" ";
            }
            cout<<endl;
            for(int i = count;i<n;i++){
                cout<<a[i]<<" ";
            }
            cout<<endl;

        }
      

        
    }
}