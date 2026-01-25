// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     int t;
//     cin>>t;
//     while(t--){
//         int a1,a2,b1,b2;
//         cin>>a1>>a2>>b1>>b2;
//         int count = 0,count1 = 0;
//         vector<int>sun,sla;
//         sun.push_back(a1);
//         sun.push_back(a2);
//         sla.push_back(b1);
//         sla.push_back(b2);
//         for(int i = 0;i<2;i++){
//             for(int j =0;j<2;j++){
//                 if(sun[i]>sla[j]){
//                         count++;
//                 }else{
//                         count1++;
//                 }
//             }
//         }
//         if(count!=0){
//         cout<<abs(count-count1)<<endl;}
//         else if(count==0){
//             cout<<count<<endl;
//         }
//     }
// }
#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int a1, a2, b1, b2;
        cin >> a1 >> a2 >> b1 >> b2;

        vector<int> sun = {a1, a2};
        vector<int> sla = {b1, b2};
        int suneetWins = 0;
        vector<vector<int>> sunPerms = {{0, 1}, {1, 0}};
        vector<vector<int>> slaPerms = {{0, 1}, {1, 0}};

        for (auto sunOrder : sunPerms) {
            for (auto slaOrder : slaPerms) {
                int roundsWonBySuneet = 0;
                int r_slav = 0;
                if (sun[sunOrder[0]] > sla[slaOrder[0]]) {
                    roundsWonBySuneet++;
                } else if (sun[sunOrder[0]] < sla[slaOrder[0]]) {
                    r_slav++;
                }
                if (sun[sunOrder[1]] > sla[slaOrder[1]]) {
                    roundsWonBySuneet++;
                } else if (sun[sunOrder[1]] < sla[slaOrder[1]]) {
                    r_slav++;
                }
                if (roundsWonBySuneet > r_slav) {
                    suneetWins++;
                }
            }
        }

        cout << suneetWins << endl;
    }
    return 0;
}
