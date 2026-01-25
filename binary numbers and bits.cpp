#include <bits/stdc++.h>
using namespace std;
// int main(){
//     cout<<INT_MAX<<endl;
//     int a = (1LL << 31) -1;
//     cout<<a<<endl;
//     unsigned int b = (1LL<<32)-1;
//     cout<<b<<endl;
// }
void printBinary(int num){
    for(int i =10;i>=0;i--){
        cout<<((num>>i)&1);
    }
   cout<<endl;
}
// int main(){
//     printBinary(9);
//     int a = 9;
//     int i = 3;
//     if((a& (1<<i))!=0){
//         cout<<"set bit\n";
//     }
//     else{
//         cout<<"not set bit\n";
//     }

// printBinary(a|(1<<2));
// printBinary(a&(~(1<<i)));
// printBinary(a^(1<<i));
// int ct = 0;
// for(int i = 31;i>=0;i--){
//     if((a&(1<<i)) !=0){
//         ct++;
 
//     }
    
// }
// cout<<ct<<endl;
// cout<<__builtin_popcount(a)<<endl; 
// cout<<__builtin_popcountll((1LL<<35)-1)<<endl;
// } 
// int main(){
//     for(int i = 0;i<10;i++){
//         if((1 & i) ){
//         printBinary(i);

//         cout<<"it is even"<<endl; 
//         }else{
//             printBinary(i);
//             cout<<"it is odd"<<endl;
//         }
//     }
   
// }
// int main(){ 
//     char d  = 'd';
//     char D = d&'_';//lower to upper 
//     cout<<D<<endl;
//      d = D |' ';// upper to lower

//     cout<<d<<endl;
// }
// int main(){
//     printBinary(59);
//     int a = 59;
//     int i = 4;
//     int b = a&(~((1<<(i+1))-1));
//     printBinary(b);
//     i =3;
//     int c = a & ((1<<(i+1))-1);
//     printBinary(c);
// }
// int main(){
//     int n = 16;
//     if((n&(n-1))==0){
//         cout<<"YEs"<<endl;

//     }else{
//         cout<<"No"<<endl;
//     }
// }
// int main(){
//     int a = 4,b = 6;
//      a = a^b;
//      b = b^a;  
//      a = a^b;
    
//      cout<<a <<" "<<b<<endl;

// }

