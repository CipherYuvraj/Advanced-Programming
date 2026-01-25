// Sherlock is investigating that who was responsible for the massacre at the British embassy in Tbilisi.
// AMMO codeword signifies something. What can be its meaning?

// Sherlock is suspecting some people , and each of them has some jealousy coefficient.
// Consider yourself to be Dr.Watson. You need to arrange these names in decreasing order of jealousy.

// If two or more people have same jealousy coefficient , they must be arranged in lexicographical order.
//input
// 3
// Smallwood 3
// Vivian 5
// Norbury 5
//output
// Norbury 5
// Vivian 5
// Smallwood 3
#include <bits/stdc++.h>
using namespace std;
bool cmp(pair<string,int>a,pair<string,int>b){
 if(a.second!=b.second){
    return a.second>b.second;
 }
    return a.first<b.first;
}

int main(){

    int n;
    cin>>n;
    vector<pair<string,int>>a(n);
      for(int i =0;i<n;i++){
        cin>>a[i].first>>a[i].second;

    }
    sort(a.begin(),a.end(),cmp);
    for(int i =0;i<n;i++){
        cout<<a[i].first<<" "<<a[i].second<<endl;
    }


}