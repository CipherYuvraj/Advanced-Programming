#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<int>masks(n,0);
    int mask = 0;
    for(int i =0;i<n;i++){
        int num_workers;
        cin>>num_workers;
        for(int j = 0;j<num_workers;j++){
            int day;
            cin>>day;
            mask =(mask|(1<<day));

        }
        masks[i] = mask;
    }
    int max_days = 0;
    for(int i =0;i<n;++i){
        for(int j = i+1;j<n;++j){
          int intersection = (masks[i] &masks[j]); 
           
           int common_days = __builtin_popcount(intersection);
           max_days = max(max_days,common_days);
           
        }
    }
    cout<<max_days<<endl;
}