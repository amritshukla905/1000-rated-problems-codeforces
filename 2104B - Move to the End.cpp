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
    vi v(n);
    rep(i, 0, n) cin >> v[i];
    
    vll sm;
    sm.pb(0);
    ll sum = 0;
    rrep(i,n-1,1){
        sum += v[i];
        sm.pb(sum);
    }
    vi mx(n);
    int maxi = INT_MIN;
    rep(i,0,n){
        if(v[i] > maxi){
            maxi = v[i];
        }
        mx[n-i-1] = maxi;
    }
    rep(i,0,n) cout<<(mx[i] + sm[i])<<" ";
    cout<<"\n";
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t = 1;
    cin >> t;
    while (t--) solve();

    return 0;
}