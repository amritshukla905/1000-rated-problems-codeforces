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
    int n,k;
    cin>>n>>k;
    vi a1(n);
    rep(i,0,n){
        cin>>a1[i];
    }

    vector<pii> v(n);
    rep(i,0,n){
        int x = a1[i] % k;
        if(x == 0) x = k;
        v[i] = {x, i+1};
    }

    sort(all(v), [](pii a, pii b){
        if(a.F == b.F) return a.S < b.S;
        return a.F > b.F;
    });

    rep(i,0,n){
        cout<<v[i].S<<" ";
    }
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