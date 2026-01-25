// sorting
// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     int n ;
//     cin>>n;
//     int a[n];
//     for(int i  =0;i<n;i++){
//         cin>>a[i];
//     }
//     sort(a,a+n); /// intro sort takes address of the array element and it is the best method to sort uses 3 algos(quick sort,heap sort  ,and insertion  sort) for sorting;
//     for(int i  =0;i<n;i++){
//         cout<<a[i]<<" ";
//     }
//     cout<<endl;



//     vector<int>a1(n);
//     for(int i  =0;i<n;i++){
//         cin>>a1[i];
//     }
//     sort(a1.begin(),a1.end()); /// intro sort takes address of the array element and it is the best method to sort uses 3 algos(quick sort,heap sort  ,and insertion  sort) for sorting;
//     //complexity   = O(nlog(n))
//     for(int i  =0;i<n;i++){
//         cout<<a1[i]<<" ";
//     }
//     cout<<endl;
// }




//comparator function sorting;
// #include<bits/stdc++.h>
// using namespace std;

// bool should_i_swap(int a,int b){
//     if(a>b){
//         return true;
//     }
//     return false;
// }
// int main(){
//     int n;
//     cin>>n;
//     vector<int>a(n);
//     for(int i =0;i<n;i++){
//         cin>>a[i];

//     }
//     for(int i = 0;i<n;i++){
//         for(int j = i+1;j<n;j++){
//             if(should_i_swap(a[i],a[j])){
//                 swap(a[i],a[j]);
//             }
//         }
//     }
//     for(int i =0;i<n;i++){
//         cout<<a[i]<<" ";

//     }
   
// }
#include<bits/stdc++.h>
using namespace std;

// bool should_i_swap(int a,int b){
//     if(a<b){
//         return true;
//     }
//     return false;
// }
bool should_i_swap(pair<int,int>a,pair<int,int>b){
//   if(a.first!=b.first){
//     if(a.first>b.first){
//         return false;
//     }
//     return true;

//   }else{
//     if(a.second<b.second){
//         return false;
//     }
//     return true;
//   }
//or
    if(a.first!=b.first){
        return a.first<b.first;
    }
    return a.second>b.second;
 
}
int main(){
    int n;
    cin>>n;
    vector<pair<int,int>>a(n);
    for(int i =0;i<n;i++){
        cin>>a[i].first>>a[i].second;

    }
    // for(int i = 0;i<n;i++){
    //     for(int j = i+1;j<n;j++){
    //         if(should_i_swap(a[i],a[j])){
    //             swap(a[i],a[j]);
    //         }
    //     }
    // }
    sort(a.begin(),a.end(),should_i_swap);
    for(int i =0;i<n;i++){
        cout<<a[i].first<<" "<<a[i].second<<endl;

    }
   
}