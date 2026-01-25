// #include <bits/stdc++.h>
// using namespace std;
// int main(){
//     stack<char>str;
//     int n;
//     cin>>n;
//     while(n--){

//     for(int i =0 ; i<n;i++){
//         char s;
//         cin>>s;
//         if(s=='('||s=="["||s=="{"){
//         str.push(s);}
//         else
//             {if(s==")"||s=="]"||s=="}"){
                
//                 str.pop();
//             }
//             }
//     }
//     if(str.empty()){
//         cout<<"yes"<<endl;
//     }
//        else{
//         cout<<"no";
//        } 
//     }
    
// }
#include <bits/stdc++.h>
using namespace std;
unordered_map<char,int>symbols = {{'[',-1},{'(',-2},{'{',-3},{']',1},{')',2},{'}',3}};
string isBalanced(string s){
    stack<char>st;
    for(char brackets:s){
        if(symbols[brackets]<0){
            st.push(brackets);
        }else{
            if(st.empty()) return "NO";
            char top = st.top();
            st.pop();
            if(symbols[top] +symbols[brackets] !=0){
                return "NO";
            }
            
        }
    }
    if(st.empty()) return "YES";
    return "NO";
}



int main(){
    int n;
    cin>>n;
    while(n--){
        string s;
        cin>>s;
        cout<<isBalanced(s)<<endl;
    }
}