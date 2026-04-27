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
    cin >> n;
    int k = (n + 1) / 2;
    vector < pll > v1(n);
    rep(i, 0, n) {
        cin >> v1[i].F;
        if (i < k) v1[i].S = i;
        else v1[i].S = i + 1;
    }
    sort(all(v1));
    vector < pll > v2(n);
    rep(i, 0, n) {
        if (i < k) {
            v2[i].F = k - i;
            v2[i].S = i;
        }
        else {
            v2[i].F = i +1 - k;
            v2[i].S = i + 1;
        }
    }
    sort(v2.rbegin(), v2.rend());
    vector < pll > z(n);
    ll ans = 0;
    rep(i, 0, n) {
        ans += (v1[i].F) * (v2[i].F) * 2;
        z[i].F = v1[i].S;
        z[i].S = v2[i].S;
    }
    sort(all(z));
    cout << ans << "\n";
    cout << k;
    rep(i, 0, n) cout << " " << z[i].S;
    cout << "\n";

}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t = 1;
    cin >> t;
    while (t--) solve();

    return 0;
}