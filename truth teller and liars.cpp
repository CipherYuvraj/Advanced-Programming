#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,m;
        cin>>n>>m;
        if(n>m){
            cout<<m+(n-(n-m))+1<<endl;

        }else{
            cout<<-1<<endl;
        }
    }
}