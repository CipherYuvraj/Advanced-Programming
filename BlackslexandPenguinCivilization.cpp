#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;cin>>t;
	while(t--){
		int n;cin>>n;
		for(int b=(1<<n);b>0;b/=2){
			for(int x=b-1;x<(1<<n);x+=2*b){
				cout<<x<<" ";
			}
		}cout<<endl;
	}
	return 0;
}