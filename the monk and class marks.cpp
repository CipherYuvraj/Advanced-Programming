// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     int t;
//     cin>>t;
//     multimap<pair<int,string>,string>m;
//     while(t--){
//         string s;
//         cin>>s;
//         int marks ;
//         cin>>marks;
//         m.insert({{100-marks,s},s});
//     }
//         for(auto i:m){
//             cout<<i.second<<" "<<(100-(i.first.first))<<endl;

//         }
//     }














// #include <bits/stdc++.h>
// using namespace std;
// int main(){
//     int n;
//     cin>>n;
//     multimap<pair<int,string>,string>m;
//     while(n--){
//         string str;
//         int marks;
//         cin>>str>>marks;
//         m.insert({{100-marks,s},s});

//     }
//     for(auto &i:m){
//         cout<<i.second<<" "<<(100-(i.first.first))<<endl;
//     }
// }



















// #include <bits/stdc++.h>
// using namespace std;
// int main(){
//     map<int,multiset<string>>marks_map;

//     int n;
//     cin>>n;
//     for(int i = 0;i,n;i++){
//         int marks;
//         string name;
//         cin>>name>>marks;
//         marks_map[marks].insert(name);

//     }
//     auto cur_it = --marks_map.end();
//     while(true){
//         auto &students = (*cur_it).second;
//         int marks =(*cur_it).first;
//         for(auto student: students){
//             cout<<student<<" "<<marks<<endl;
//         }
//         if(cur_it ==marks_map.begin()) break;
//         cur_it--;

//     }
// }
// #include <bits/stdc++.h>
// using namespace std;
// int main(){
//     map<int,multiset<string>>marks_map;

//     int n;
//     cin>>n;
//     for(int i = 0;i<n;i++){
//         int marks;
//         string name;
//         cin>>name>>marks;
//         marks_map[-1*marks].insert(name);

//     }
//     for(auto &students_marks_pair:marks_map){
//         auto &students = students_marks_pair.second;
//         int marks =students_marks_pair.first;
//         for(auto student: students){
//             cout<<student<<" "<<-1*marks<<endl;
//         }
       

//     }
// }
//or using ccmparator function;
#include <bits/stdc++.h>
using namespace std;
bool cmp(pair<string,int>a,pair<string,int>b){
 if(a.second!=b.second){
    return a.second>b.second;
 }
    return a.first<b.first;
}

int main(){

    int n;
    cin>>n;
    vector<pair<string,int>>a(n);
      for(int i =0;i<n;i++){
        cin>>a[i].first>>a[i].second;

    }
    sort(a.begin(),a.end(),cmp);
    for(int i =0;i<n;i++){
        cout<<a[i].first<<" "<<a[i].second<<endl;
    }


}