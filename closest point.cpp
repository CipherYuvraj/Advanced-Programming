#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int>s(n);
        int count = 0;
        // for(int i = 0;i<n;i++){
        //     int x;
        //     cin>>x;

        //     s.insert(x);
        // }
        for(int i = 0;i<n;i++){
            // int x;
            // cin>>x;

            cin>>s[i];
            count++;
        }
        if(n==2 && abs(s[n-1]-s[n-2])!=1){
            cout<<"yes"<<endl;
        }else{
        cout<<"NO"<<endl;
    }
}
}