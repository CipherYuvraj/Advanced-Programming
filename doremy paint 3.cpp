#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int>a(n);
        map<int,int>freq;
        for(int i  =0;i<n;i++){
            cin>>a[i];
        }
        for(int num:a){
            freq[num]++;
        }

     if(freq.size()>2){
        cout<<"NO"<<endl;
     }else{
    auto it = freq.begin();
    auto itr = freq.rbegin();
    if(abs(it->second -itr->second)<=1){
        cout<<"YES"<<endl;
        
    }
    else{
        cout<<"NO"<<endl;
    }
     }
    }
}