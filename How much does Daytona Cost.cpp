#include<bits/stdc++.h>
using namespace std;
const int N = 1e3+7;
vector<int>hsh(N);

int main(){
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        vector<int>a(n);
        int count = 0;
        
        for(int i = 0;i<n;i++){
            cin>>a[i];
        }
         for(int i = 0;i<n;i++){
            if(a[i]==k){
                count++;
            }
        }

        for(int i = 0;i<n;i++){
            hsh[a[i]]++;
            
        }
        for(int c:hsh){
          
            
        }
        if(count==0){
        cout<<"NO"<<endl;
    }else{cout<<"YES"<<endl;}
        
    }
    
}