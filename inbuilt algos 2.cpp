#include<bits/stdc++.h>
using namespace std;
int main(){
     cout<<[](int x){return x+2;}(4)<<endl;
    //or
    auto sum = [](int x,int y){
        return x+y;
    };
    cout<<sum(45 ,34)<<endl;
    vector<int>v = {4,3,-5,2};
    cout<<all_of(v.begin(),v.end(),[](int x){return x>0;})<<endl;
    cout<<any_of(v.begin(),v.end(),[](int x){return x>0;})<<endl;
    vector<int> d = {-2,-31,-2,-1};
    cout<<none_of(d.begin(),d.end(),[](int x){return x>0;})<<endl;
}