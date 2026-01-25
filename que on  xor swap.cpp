#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
   int x;
    int c=  0;
    
    for(int i= 0;i<n;i++){
        cin>>x;
        c^=x;
    }
   
    cout<<c<<endl; 
    
}
// O(N) time 
//O(1)space