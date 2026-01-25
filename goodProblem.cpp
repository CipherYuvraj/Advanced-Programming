#include <bits/stdc++.h> 
using namespace std;

typedef long long ll;
typedef unsigned long long ull;
typedef long double ld;
typedef pair<int, int> pii;
typedef pair<ll, ll> pll;
typedef vector<int> vi;
typedef vector<ll> vll;
typedef vector<pii> vpii;
typedef vector<pll> vpll;
typedef vector<vi> vvi;
typedef vector<vll> vvll;

#define fastio ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()
#define pb push_back
#define mp make_pair
#define F first
#define S second
#define sz(x) (int)(x).size()
#define rep(i, a, b) for(int i = a; i < (b); ++i)
#define trav(a, x) for(auto& a : x)
#define nl '\n'
#define sp ' '
#define INF 0x3f3f3f3f
#define LINF 0x3f3f3f3f3f3f3f3fLL
#define MOD 1000000007

ll gcd(ll a, ll b) { return b ? gcd(b, a % b) : a; }
ll lcm(ll a, ll b) { return a / gcd(a, b) * b; }
ll binpow(ll a, ll b) {
    ll res = 1;
    while (b > 0) {
        if (b & 1) res = (res * a);
        a = (a * a);
        b >>= 1;
    }
    return res;
}
ll binpow_mod(ll a, ll b, ll m) {
    a %= m;
    ll res = 1;
    while (b > 0) {
        if (b & 1) res = (res * a) % m;
        a = (a * a) % m;
        b >>= 1;
    }
    return res;
}

#ifdef LOCAL
    #define debug(x) cerr << #x << " = " << (x) << endl
    #define debug_arr(a, n) cerr << #a << ": "; for (int i = 0; i < n; i++) cerr << a[i] << " "; cerr << endl
    #define debug_vec(v) cerr << #v << ": "; for (auto x : v) cerr << x << " "; cerr << endl
#else
    #define debug(x)
    #define debug_arr(a, n)
    #define debug_vec(v)
#endif

void solve() {
    ull totalBits, left, right, budget;
    cin >> totalBits >> left >> right >> budget;

    if (totalBits == 1) {
        cout << left << nl;
        return;
    }

    if (totalBits & 1) {
        if (budget <= totalBits) cout << left << nl;
        else cout << -1 << nl;
        return;
    }

    if (totalBits == 2) {
        cout << -1 << nl;
        return;
    }

    ull current = left;

    while (true) {
        bool valid = true;

        for (int pos = 0; pos < 64; ++pos) {
            ull mask = (1ULL << pos);
            if ((left & mask) && (current & mask)) {
                current += mask;
                current &= ~(mask - 1);
                valid = false;
                break;
            }
        }

        if (valid) break;
    }

    if (current > right) {
        cout << -1 << nl;
    } else {
        if (budget <= totalBits - 2) cout << left << nl;
        else cout << current << nl;
    }
}


int main() {
    fastio;
    int t;
    cin >> t;
    while (t--) solve();
    return 0;
}
