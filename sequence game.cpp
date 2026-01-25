#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        
      
        long long  n;
        cin>>n;
        vector<long long>b(n);
        vector<long long >a;
        for(long long i =0;i<n;i++){
            cin>>b[i];
       
        }
        a.push_back(b[0]);
        for(long long i = 1;i<n;i++){
            
            if(b[i-1]>b[i]){
                a.push_back(b[i]);
                a.push_back(b[i]);
               
            }
            else{
                a.push_back(b[i]);
            }
        
        }
        cout<<(long long)a.size()<<endl;
        for(long long  i = 0;i<a.size();i++){
            cout<<a[i]<<" ";
        }
        cout<<endl;
        
        


    }
}