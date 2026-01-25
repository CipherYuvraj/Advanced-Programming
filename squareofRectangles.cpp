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
    vector<pair<int, int>> a(3);
    for (int i = 0; i < 3; i++) {
        cin >> a[i].first >> a[i].second;
    }
    long long area = 0;
    for (int i = 0; i < 3; i++) {
        area += 1LL * a[i].first * a[i].second;
    }
    int s = (int)floor(sqrt(area));
    bool ok = false;
    if (1LL * s * s == area) {
        array<int, 3> p = {0, 1, 2};
        do {
            int x1 = a[p[0]].first, y1 = a[p[0]].second;
            int x2 = a[p[1]].first, y2 = a[p[1]].second;
            int x3 = a[p[2]].first, y3 = a[p[2]].second;
            if (x1 == s && x2 == s && x3 == s && y1 + y2 + y3 == s) ok = true;
            if (y1 == s && y2 == s && y3 == s && x1 + x2 + x3 == s) ok = true;
            if (y1 == s && x2 == s - x1 && x3 == s - x1 && y2 + y3 == s) ok = true;
            if (x1 == s && y2 == s - y1 && y3 == s - y1 && x2 + x3 == s) ok = true;
        } while (next_permutation(p.begin(), p.end()) && !ok);
    }
    cout << (ok ? "YES\n" : "NO\n");
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