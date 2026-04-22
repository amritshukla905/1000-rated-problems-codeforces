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
    ll n, k;
    cin >> n >> k;
    string s;
    cin >> s;

    ll cnt = 0;

    rep(i, 0, k) {
        if (s[i] == 'W') cnt++;
    }

    ll mn = cnt;
    
    rep(i, k, n) {
        if (s[i] == 'W') cnt++;       
        if (s[i - k] == 'W') cnt--;   
        mn = min(mn, cnt);
    }

    cout << mn << "\n";
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t = 1;
    cin >> t;
    while (t--) solve();

    return 0;
}