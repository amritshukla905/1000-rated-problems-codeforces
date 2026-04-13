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
    int n;
    ll k;
    cin >> n >> k;
    vi a(n);
    vi b(n);
    rep(i, 0, n) cin >> a[i];
    rep(i, 0, n) cin >> b[i];

    ll cmp = -1;
    bool ok1 = false;
    bool ok2 = false;

    int cnt = 0;
    rep(i, 0, n) {
        if (b[i] == -1) cnt++;
        if (b[i] != -1 && cmp == -1) {
            cmp = (ll)b[i] + a[i];
        }
    }
    if (cnt == n) {
        ll mx = *max_element(all(a));
        ll mn = *min_element(all(a));
        cout << max(0LL, mn + k - mx + 1) << "\n";
        return;
    }
    rep(i, 0, n) {
        if (b[i] == -1) {
            continue;
        }
        if ((ll)a[i] + b[i] != cmp) {
            ok1 = true;
            break;
        }
    }
    if (ok1) {
        cout << 0 << "\n";
        return;
    }
    rep(i, 0, n) {
        if (b[i] == -1 && (cmp - a[i] < 0 || cmp - a[i] > k)) {
            ok2 = true;
            break;
        }
    }
    if (ok2) {
        cout << 0 << "\n";
        return;
    }
    cout << 1 << "\n";

}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t = 1;
    cin >> t;
    while (t--) solve();

    return 0;
}