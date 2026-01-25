#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<int>s(n);//if we  taken arr here then the addresses are been taken as {s.begin() = s} and{ s.end() = s+n};
    for(int i =0;i<n;i++){
        cin>>s[i];

    }
    cout<<*min_element(s.begin(),s.end())<<endl;
    cout<<*max_element(s.begin(),s.end())<<endl;
    cout<<accumulate(s.begin(),s.end(),0)<<endl;// the 0 is the initial sum we assigned in the accumulate algo;
    cout<<count(s.begin(),s.end(),4)<<endl;//by this function we can assin a digit whose countwe require ;
    auto it = find(s.begin(),s.end(),23);//in vectors it is working as iterator but in arrays it will work as pointer;

    if(it == s.end()){
    cout<<"element not found"<<endl;
    }else{
        cout<<(*it)<<endl;
    }
    reverse(s.begin(),s.end());
    for(auto &val : s){
        cout<<val<<" ";
    }
    cout<<endl;
    //we  can reverse a particular portion also like giving the command "reverse(s.begin()+3,s.end())" it prints the vector's values exact before the 3 and after 3 to end it will reverse the elements;
    string str= "asedfgdfghdfe";
    reverse(str.begin()+3,str.end()); //we  can reverse a particular portion also like giving the command "reverse(s.begin()+3,s.end())" it prints the vector's values exact before the 3 and after 3 to end it will reverse the elements;
    
    cout<<str<<endl;


}
//the time complexity of these all algos are o(n);