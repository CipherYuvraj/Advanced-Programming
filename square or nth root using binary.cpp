#include<bits/stdc++.h>
using namespace std;
double eps = 1e-6;
double multiply(double mid,int n){
    double ans = 1;
    for(int i =0;i<n;i++){
        ans*=mid;
 
    }
    return ans;
}
double nth(int element,int n){


double lo = 1,hi = element,mid;
    while(hi-lo>eps){
        mid = (hi+lo)/2;
        if(multiply(mid,n) <element){
            lo= mid;
        }else{
            hi = mid;
        }

    }
return lo;
 
}
int main(){
   int n; 
   cin>>n;
    int element;
    cin>>element;
    double sq = nth(element,n);
    cout<<sq<<endl;
    cout<<pow(element,1.0/n)<<endl;
     
    
}