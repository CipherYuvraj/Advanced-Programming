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
     
    }

int main(){

    
    int tc;
   cin>>tc;
    while (tc--) {
        long long n, m;
        cin >> n >> m;

        long long minSum = n;
        long long maxSum = n * (n + 1) / 2;

        if (m < minSum || m > maxSum) {
            cout << "-1\n";
            continue;
        }

        int R = 1;
        for (int r=1; r <=n; ++r) {
            long long smin = n + 1LL * r * (r - 1) / 2;
            long long smax = 1LL * r * n - 1LL * r * (r - 1) / 2;

            if (m >= smin && m <= smax) {
                R=r;
                break;
        }
    }

        long long smax = 1LL *R* n - 1LL *R* (R - 1) / 2;
        long long diff = smax-m;

        vector<pair<int, int>> edges;
        edges.reserve(n - 1);

        for (int p = 1; p < R; ++p)
            edges.push_back({R, p});

        for (int v = R + 1; v <= n; ++v) {
            if (diff > 0) {
                long long r = min<ll>(R-1,diff);
                int p = R - (int)r;
                edges.push_back({p, v});
                diff -= r;
            } else {
                edges.push_back({R, v});
            }
        }

        cout << R << '\n';
        for (auto& edge : edges)
            cout << edge.first << ' ' << edge.second << '\n';
    }
    
    return 0;
}