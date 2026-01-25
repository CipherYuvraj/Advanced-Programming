#include <bits/stdc++.h>
using namespace std;
const int N = 1e2+10;
vector<int>smallers(N);
int main(){
    int t;
    cin>>t;
    while(t--){
        vector<int>skills(16),wins(16);
        int count = 0;

    for(int i = 0;i<16;i++){
            cin>>skills[i];
    }
    for(int i = 0;i<16;i++){
        for(int j = 0;j<16;j++){
            if(skills[i]>skills[j]){
                smallers[skills[i]]++;
               
                
            }

        }
        
    }
    for(int i = 0;i<smallers.size();i++){
        if(smallers[i]==16){
           

        }
    }

    }
}