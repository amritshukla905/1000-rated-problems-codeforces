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
    cin>>n;
    int n1 = n;
    vector<int>z;
    vector<int>k;
    while(n1--){
        int m;
        cin>>m;
        vi v(m);
        rep(i,0,m){
            cin>>v[i];
        }
        sort(all(v));
        z.pb(v[1]);
        k.pb(v[0]);
    }
    sort(all(z));
    sort(all(k));
    ll ans = k[0];
    rep(i,1,n){
        ans += z[i];
    }
    cout<<ans<<"\n";
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t = 1;
    cin >> t;
    while (t--) solve();

    return 0;
}