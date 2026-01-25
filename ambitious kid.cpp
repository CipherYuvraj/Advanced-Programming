#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int ct = 0;
    vector<int>a(n);
    for(int i = 0;i<n;i++){
        cin>>a[i];
    }
    for(int i =0;i<n;i++){
        if(a[i]<0){
            a[i] = -a[i];
        }
    }
    sort(a.begin(),a.end());
    while(a[0]>0||a[0]<0){
        if(a[0]<0){
            a[0]+=1;
            ct++;
        }
        else{
                a[0]-=1;
                ct++;
    }

    }
    cout<<ct<<endl;

}