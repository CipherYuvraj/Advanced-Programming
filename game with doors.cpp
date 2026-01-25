#include <bits/stdc++.h>
using namespace std;
#define lli long long int
int main(){
    int t;
    cin>>t;
    while(t--){
        int l1,r1,l2,r2;
        cin>>l1>>r1>>l2>>r2;
        // if((L-r) == 1){
        //     cout<<1<<endl;
        // }
        // else if(l==L && r==R){

        //     cout<<r-l<<endl;
        // }
        // else if(r==R&&L>l){
        //     cout<<R-L+1<<endl;
        // }
        // else if(r<R && l>L){
        //     cout<<r-l+2<<endl;
        // }
        // else if(r>R && l<L){
        //     cout<<R-L+2<<endl;
        // }
        // else{
        //     cout<<0<<endl;
        // }
        const lli L = max(l1,l2),R = min(r1,r2);
        if(R<L){
            cout<<1<<endl;
            continue;
        }
        lli ans = R-L;
        if(l1<L||l2<L){
            ans++;
        }
        if(r1>R||r2>R){
            ans++;
        }
        cout<<ans<<endl;
    }
}
