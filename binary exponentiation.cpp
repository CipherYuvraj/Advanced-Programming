//method 1 recursive

// #include<bits/stdc++.h>
// using namespace std;

// int  binExpRecur(int a ,int b){
    
//     if(b<=0) return 1 ;
//     long res = binExpRecur(a,b/2);
//     if(b&1){
//       return  a * res * res;
        
//     }else{
//         return res * res;
        
//     }
// }
// int main(){
//     int a = 2,b = 13;
//     cout<<binExpRecur(a,b);
    
// }


// method 2 iterative=>;
// #include <bits/stdc++.h>
// using namespace std;
// int binExpIter(int a,int b){
//     int ans = 1;
//     while(b){
//         if(b&1){
//             ans = ans*a;

//         }
//         a = a*a;
//         b>>=1;
//     }
//     return ans;
// }
// int main(){
//     int a = 3,b=  13;
//     cout<<binExpIter(a,b);

// }


//M<10^18
// #include<bits/stdc++.h>
// using namespace std;
// const long long int M = 1e18 +7;
// int binMultiply(long long a, long long b){

//     int  ans = 0;
//     while(b>0){
//         if(b&1){
//             ans  =(ans + a)%M;
//         }
//         a =( a+a)%M;
//         b>>=1;
//     }
//     return ans;
// }
// int binExp(long long a , long long b){
//     int ans = 1;
//     while(b>0){
//         if(b&1){
//             ans = binMultiply(ans,a);
//         }
//         a = binMultiply(a,a);
//         b>>=1;
//     }
//     return ans;

// }

// int main(){
//     int a = 2, b = 4;
//     cout<<binExp(a,b);
// }







//if b<=1e18;


// #include<bits/stdc++.h>
// using namespace std;
//  const int M = 1e9+7;

// int binExp(int a,long long b,int m){
//     int ans = 1;
//     while(b>0){
//         if(b&1){
//             ans = (ans*1LL*a) %m;
//         }
//         a = (a*1LL*a)%m;
//         b>>=1;
//     }
//     return ans;
// }


// int main(){
//     cout<<binExp(50,binExp(64,32,M-1),M);
// }


#include<bits/stdc++.h>
using namespace std;
 const int M = 1337;
 

int binExp(int a,int b,int m){
    a%=m;
    int ans = 1;
    // int b_b=0;
    // for(int i = 0;i<b.size();i++){
    //     b_b +=(b[i]*binExpIter(10,i))%m;
    // }
    
    while(b>0){
        if(b&1){
            ans = (ans*1LL*a) %m;
        }
        a = (a*1LL*a)%m;
        b>>=1;
    }
    return ans;
}



int superPow(int a , vector<int >&b){
int bMod = 0;



for(int i:b){
    bMod = (bMod * 10 + i)%1440;
}
    return binExp(a,bMod,1337);
}

