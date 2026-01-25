// #include<bits/stdc++.h>
// using namespace std;
//  const int N = 1e3 + 10;
// int a[N][N];
// long long pf[N][N];
// int main(){

// int n;
// cin>>n;

// for(int i = 1;i<=n;i++){
//   for(int j = 1;j<=n;j++){
//   cin>>a[i][j];

//   pf[i][j]= a[i][j]+pf[i][j-1]+pf[i-1][j]-pf[i-1][j-1];
// }
// }
// int q;
// cin>>q;
// while(q--){
// int a,b,c,d;
// cin>>a>>b>>c>>d;
// int sum;
// sum = pf[c][d]-pf[c][b-1]-pf[a-1][d]+pf[a-1][b-1];
// cout<<sum<<endl;
// }
// }

// #include <bits/stdc++.h>
// using namespace std;

// int main(){
//   int t;
//   cin>>t;
//   while(t--){
//     int n,q;
//     cin>>n>>q;
//     int a[n+10];
//     int forward[n+10];
//     int backword[n+10];
//     forward[0] = backword[n+1]= 0;
//     for(int i = 1;i<=n;i++){
//       cin>>a[i];
//     }
//   for(int i = 1;i<=n;i++){
//     forward[i] = __gcd(forward[i-1],a[i]);

//   }
//   for(int i = n;i>=1;i--){
//     backword[i] = __gcd(backword[i+1],a[i]);
    
//   }
//   while(q--){
//     int l,r;
//     cin>>l>>r;
    
    
//     cout<<__gcd(forward[l-1],backword[r+1])<<endl;

//   }
// } 
// }
// #include <bits/stdc++.h>
// using namespace std;
// const int N = 1e7+10;
// long long arr[N];
// int main(){
//   int n,m;
//   cin>>n>>m;
//   while(m--){
//     int a,b,d;
//     cin>>a>>b>>d;
//     arr[a]+=d;
//     arr[b+1]-=d;

//   }
//   for(int i = 1;i<=n;i++){
//     arr[i] +=arr[i-1];
//   }
//   long long mx = -1;
//   for(int i = 1;i<=n;i++){
//     if(mx<arr[i]){
//       mx = arr[i];
//     }
//   }
//   cout<<mx<<endl;
// }
#include<iostream>
using namespace std;
int main()
{
    int hour;
    cout<<"enter hour :"<<endl;
    cin>>hour;
    if(hour>9 && hour<=18)
    {
        cout<<"working";
    }
    else
    {
        cout<<"leisure";
    }
    return 0;
}