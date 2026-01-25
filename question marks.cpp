#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
       int count_a = 0,count_b = 0,count_c = 0,count_d = 0,count_rem = 0;

       string s;
        cin>>s;
    //       std::unordered_set<char> uniqueChars;

    // for (char c : s) {
    //     if (c != ' ' &&( c=='A'||c=='B'||c=='C'||c=='D') ) { 
    //         uniqueChars.insert(c);
    //     }
    // }

        for(int i = 0;i<s.size();i++){
            
                if(s[i]=='A')
                count_a++;
                else if(s[i]=='B')
                count_b++;
                else if(s[i]=='C')
                count_c++;
                else if(s[i]=='D')
                count_d++;
            
        }
        int corr_a = min(count_a, n);
        int corr_b = min(count_b, n);
        int corr_c = min(count_c, n);
        int corr_d = min(count_d, n);
        int total = corr_a+corr_b+corr_c+corr_d;
        int rem = count_rem;
        total +=min(rem,n*4-total);
        
        cout<<total<<endl;
        
          
        
        
    }
}