#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
#define mp make_pair
#define all(x) (x).begin(), (x).end()
#define sz(x) ((int)(x).size())
typedef pair<int, int> pii;
typedef vector<int> vi;

void solve() {
int n;
        cin >> n;
    string s;
cin >> s;

    vector<int> a(n);
        for (int k = 1; k <= n; k++) {
    set<int> available;
            for (int i = 1; i <= n; i++) {
        available.insert(i);
    }
        
a[0] = k;
    available.erase(k);
        int current_min = k;
int current_max = k;
    bool valid = true;
        
for (int i = 0; i < n - 1; i++) {
            if (s[i] == '<') {
        auto it = available.lower_bound(current_min);
                if (it == available.begin()) {
            valid = false;
                    break;
                }
        it--;
            a[i + 1] = *it;
        available.erase(it);
    } else {
                auto it = available.upper_bound(current_max);
        if (it == available.end()) {
                    valid = false;
            break;
                }
                a[i + 1] = *it;
    available.erase(it);
            }
    current_min = min(current_min, a[i + 1]);
            current_max = max(current_max, a[i + 1]);
        }
        
    if (valid) {
            for (int i = 0; i < n; i++) {
        cout << a[i] << " ";
            }
                cout << "\n";
    return;
        }
    }
}

int main() {
    ios::sync_with_stdio(false);
        cin.tie(nullptr);
    
int t;
        cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}