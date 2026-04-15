#include <bits/stdc++.h>

using namespace std;


typedef long long ll;
typedef pair < int, int > pii;
typedef pair < ll, ll > pll;
typedef vector < int > vi;
typedef vector < ll > vll;


const int MOD = 1e9 + 7;
const int INF = 1e9;
const ll LINF = 1e18;


#define all(x)(x).begin(), (x).end()
#define sz(x)(int)(x).size()
#define pb push_back
#define F first
#define S second
#define rep(i, a, b) for (int i = a; i < b; i++)
    #define rrep(i, a, b) for (int i = a; i >= b; i--)


        #ifndef ONLINE_JUDGE
#define debug(x) cerr << #x << " = " << x << "\n"
#else
#define debug(x)
#endif


void solve() {
    ll n;
    cin >> n;

    vll a(n), b(n);
    rep(i, 0, n) cin >> a[i];
    rep(i, 0, n) cin >> b[i];

    ll N = 2 * n + 5;
    vll fa(N, 0), fb(N, 0);

    ll p = 0;
    
    rep(i, 1, n) {
        if (a[i] != a[i - 1]) {
            fa[a[i - 1]] = max(fa[a[i - 1]], i - p);
            p = i;
        }
    }
    fa[a[n - 1]] = max(fa[a[n - 1]], n - p);

    p = 0;
    rep(i, 1, n) {
        if (b[i] != b[i - 1]) {
            fb[b[i - 1]] = max(fb[b[i - 1]], i - p);
            p = i;
        }
    }
    fb[b[n - 1]] = max(fb[b[n - 1]], n - p);

    ll ans = 0;
    rep(i, 0, N) {
        ans = max(ans, fa[i] + fb[i]);
    }

    cout << ans << "\n";
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t = 1;
    cin >> t;
    while (t--) solve();

    return 0;
}