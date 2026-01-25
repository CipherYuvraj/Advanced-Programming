// 
#include<bits/stdc++.h>
using namespace std;
bool cmp(pair<char,int>&a,pair<char,int>&b){
    if(a.second!=b.second) return a.second>b.second;
    else return a.first<b.first;
}
int main(){
   char str[1001];
   cin.getline(str,1001);
   int len = strlen(str);
   pair<char,int>frequency[256];

    for(int i= 0 ;i<256;i++){
       frequency[i]  = make_pair((char) i,0);
   }
   for(int i=0;i<len;i++){
    frequency[str[i]].second++;
   }
   sort(frequency,frequency+256,cmp);
   cout<<frequency[0].first<<endl;
}


// // }
// #include <iostream>
// #include <cstring>

// using namespace std;

// int main() {
//     char str[1001];
//     cin.getline(str, 1001);  // Reading input string
    
//     int count[256] = {0};  // Array to count occurrences of each character (ASCII range)
//     int len = strlen(str);
    
//     // Count frequencies of each character in the string
//     for (int i = 0; i < len; ++i) {
//         count[str[i]]++;
//     }
    
//     char max_char = '\0';  // Variable to store character with maximum frequency
//     int max_freq = 0;      // Variable to store maximum frequency found
    
//     // Find character with maximum frequency, breaking ties by ASCII value
//     for (int i = 0; i < 256; ++i) {
//         if (count[i] > max_freq) {
//             max_freq = count[i];
//             max_char = (char) i;
//         }
//     }
    
//     cout << max_char << endl;  // Output the character with maximum frequency
    
//     return 0;
// }