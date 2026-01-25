#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
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

ll modinv(ll a) {
    return binpow_mod(a, MOD - 2, MOD); // Using Fermat's Little Theorem
}

ll comb(ll n, ll r, const vll& inv) {
    ll res = 1;
    for (ll i = 1; i <= r; ++i) {
        res = res * ((n - r + i) % MOD) % MOD;
        res = res * inv[i] % MOD;
    }
    return res;
}

void solve() {
    ll a, b, k;
    cin >> a >> b >> k;

    ll maxA = a;
    vll inv(maxA + 2);
    inv[1] = 1;
    for (ll i = 2; i <= maxA + 1; ++i) {
        inv[i] = MOD - MOD / i * inv[MOD % i] % MOD;
    }

    ll n = (a - 1) * k + 1;
    ll c = comb(n, a, inv);
    ll m = ((b - 1) % MOD) * (k % MOD) % MOD;
    m = (m * c + 1) % MOD;

    cout << n % MOD << sp << m << nl;
}

int main() {
    fastio;
    int tc;
    cin >> tc;
    while (tc--) {
        solve();
    }
    return 0;
}
