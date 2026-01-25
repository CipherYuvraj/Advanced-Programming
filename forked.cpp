#include<bits/stdc++.h>
using namespace std;
int dx[] = {-1,1,-1,1};
int dy[] = {-1,-1,1,1};
int main(){
    int t ;
    cin>>t;
    while(t--){

        int a,b;
        cin>>a>>b;
        int ka,kb;
        cin>>ka>>kb;
        int qa,qb;
        cin>>qa>>qb;
        set<pair<int,int>>x,y;
        for(int i = 0;i<4;i++){

            x.insert({ka+dx[i]*a,kb+dy[i]*b});
            x.insert({ka+dx[i]*b,kb+dy[i]*a});
            y.insert({qa+dx[i]*a,qb+dy[i]*b});
            y.insert({qa+dx[i]*b,qb+dy[i]*a});
        }
        int ans = 0;
        for(auto position:x){
            if(y.find(position)!=y.end()){
                ans++;
            }
        }
        cout<<ans<<endl;

    }
}
