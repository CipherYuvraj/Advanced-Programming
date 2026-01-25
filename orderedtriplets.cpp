#include <bits/stdc++.h>
using namespace std;
const int N = 1e5+10;
int a[N];
void merge(int L,int R,int mid){
	int l_sz = mid-L+1;
	int l[l_sz];
	int r_sz = R-mid;
	int r[r_sz];
	for(int i = 0;i<l_sz;i++){
		l[i]  = a[i+L];
	}
	for(int i = 0;i<r_sz;i++){
		r[i]  = a[i+mid+1];
	}
	l[l_sz]  = r[r_sz] =  INT_MAX;
	int l_i = 0;
	int r_i = 0;
	for(int i = L;i<=R;i++){
		if(l[l_i]<=r[r_i]){
			a[i] = l[l_i];
			l_i++;
		}else{
			a[i] = r[r_i];
			r_i++;
		}
	}
}

void mergeSort(int l,int r){
	if(l==r) return;
	int mid = (l+r)/2;
	mergeSort(l,mid);
	mergeSort(mid+1,r);
	merge(l,r,mid);
	
}

int main(){
	int n;
	 cin>>n;
	
	 for(int i = 0;i<n;i++){
	 	cin>>a[i];
	 }
	 // for(int i = 0;i<n;i++){
	 // 	int minIndex = i;
	 // 	for(int j = i+1;j<n;j++){
	 // 		if(arr[j]<arr[minIndex]){
	 // 			minIndex = j;
	 // 		}
	 // 	}
	 // 	swap(arr[i],arr[minIndex]);
	 // }
	 // for(int i  =0;i<n;i++){
	 // 	cout<<arr[i]<<" ";
	 mergeSort(0,n-1);
	 for(int i = 0;i<n;i++){
	 	cout<<a[i]<<" ";
	 }
	 }
	

