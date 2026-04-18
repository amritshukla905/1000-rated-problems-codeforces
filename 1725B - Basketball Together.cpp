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
    ll n, d;
    cin >> n >> d;
    vll v(n);
    rep(i, 0, n) cin >> v[i];
    sort(all(v));
    int i = 0;
    int j = n - 1;
    ll ans = 0;
    while (i <= j) {
        ll k;
        if (d % v[j] == 0) {
            k = d / v[j];
            k++;
        }
        else {
            k = (d + v[j] - 1) / v[j];
        }
        k--;
        i += k;
        if (i <= j) {
            ans++;
            j--;
        }
        else {
            break;
        }
    }
    cout << ans << "\n";
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t = 1;
    //    cin >> t;
    while (t--) solve();

    return 0;
}