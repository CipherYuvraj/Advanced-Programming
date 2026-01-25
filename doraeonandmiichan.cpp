#include <bits/stdc++.h>
using namespace std;
int main(){
	
	int m,n;
	cin>>m>>n;
	int arr[m][n];
	for(int i = 1 ;i<=m;i++){
		for(int j  = 1;j<=n;j++){
			cin>>arr[i][j];
		}
	}
	int q;
	cin>>q;
	while(q--){

		int l1,r1,l2,r2;
		cin>>l1>>r1>>l2>>r2;
		int oddCt = 0;
		for(int i = l1;i<=l2;i++){
			for(int j = r1;j<=r2;j++){
				if(arr[i][j]%2!=0) oddCt++;
			}

		}
		cout<<oddCt<<endl;

	}


}
