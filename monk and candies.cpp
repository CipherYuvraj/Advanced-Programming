// Our Monk loves candy!
// While taking a stroll in the park, he stumbled upon N Bags with candies. The i'th of these bags contains Ai candies.
// He picks up a bag, eats all the candies in it and drops it on the ground. But as soon as he drops the bag, the number of candies in the bag increases magically! Say the bag that used to contain X candies (before eating), now contains [X/2] candies! ,where [x] is the greatest integer less than x (Greatest Integer Function).
// Amazed by the magical spell, Monk can now have a lot more candies! But he has to return home in K minutes. In a single minute,Monk can consume all the candies in a single bag, regardless of the number of candies in it.
// Find the maximum number of candies that Monk can consume.
#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
     multiset<long long> s;
     for(int i=0;i<n;i++){
        long long x;
        cin>>x;
        s.insert(x);

     }
     long long total_candies = 0;
     for(int i =0;i<k;++i){
            auto last_it = (--s.end());
            long long candy_ct = *last_it;
            total_candies += candy_ct;
            s.erase(last_it);
            s.insert(candy_ct/2);

     }
    cout<<total_candies<<endl;

    }
}