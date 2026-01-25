#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

void solve() {
    int n, k;
    cin >> n >> k;
    
    vector<ll> left(n), right(n);
    for (int i = 0; i < n; i++) {
        cin >> left[i];
    }
    for (int i = 0; i < n; i++) {
        cin >> right[i];
    }
    
    // Calculate total gloves
    ll total_gloves = 0;
    for (int i = 0; i < n; i++) {
        total_gloves += left[i] + right[i];
    }
    
    // Create a list of colors with their potential matching pairs
    vector<ll> potential_pairs;
    for (int i = 0; i < n; i++) {
        potential_pairs.push_back(min(left[i], right[i]));
    }
    
    // Sort by potential pairs in descending order
    sort(potential_pairs.rbegin(), potential_pairs.rend());
    
    // Calculate how many gloves we can leave in the drawer
    ll can_leave = 0;
    
    // We can leave the maximum potential pairs for the n-k colors
    // (since we need at least k colors with matching pairs)
    for (int i = 0; i < n - k; i++) {
        can_leave += 2 * potential_pairs[i];
    }
    
    // Answer is total gloves minus what we can leave
    ll answer = total_gloves - can_leave;
    
    cout << answer << "\n";
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t;
    cin >> t;
    
    while (t--) {
        solve();
    }
    
    return 0;
}