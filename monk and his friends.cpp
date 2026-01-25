
#include <bits/stdc++.h> 
using namespace std; 
int main() { 
    int T; 
    cin >> T;
    while (T--) { 
    int N, M;
     cin >> N >> M;
    unordered_multiset<long long> s; 
    for (int i = 0; i < N+M; ++i) {
        long long x; 
        if(i<N){
            cin >> x;
             s.insert(x); 
            }else{
                cin >> x; 
                auto it = s.find(x);
                if (it == s.end())
                { 
                cout << "NO\n";
                s.insert(x);
                } else {
                    cout << "YES\n"; 
                        } 
                             }  
                              } 
                              } 
                              return 0;
                               }