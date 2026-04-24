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
    ll w, h;
    cin >> w >> h;
    ll k1;
    cin >> k1;
    vll vh1(k1);
    rep(i, 0, k1) cin >> vh1[i];
    ll k2;
    cin >> k2;
    vll vh2(k2);
    rep(i, 0, k2) cin >> vh2[i];
    ll z1;
    cin >> z1;
    vll vv1(z1);
    rep(i, 0, z1) cin >> vv1[i];
    ll z2;
    cin >> z2;
    vll vv2(z2);
    rep(i, 0, z2) cin >> vv2[i];
    ll ans1 = (vh1[k1 - 1] - vh1[0]) * h;
    ll ans2 = (vh2[k2 - 1] - vh2[0]) * h;
    ll ans3 = (vv1[z1 - 1] - vv1[0]) * w;
    ll ans4 = (vv2[z2 - 1] - vv2[0]) * w;
    cout << (max(max(ans1, ans2), max(ans3, ans4))) << "\n";

}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t = 1;
    cin >> t;
    while (t--) solve();

    return 0;
}