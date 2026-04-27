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

ll rqans(ll n,ll k){
    n = n/k;
    int cnt = 1;
    while(n>0){
        cnt++;
        n = n/k;
    }
    return cnt;
}

void solve() {
    ll n,k;
    cin>>n>>k;
    ll k1 = 0;
    if(k == 1){
        k++;
        k1++;
    }
    vll v;
    for(int i = k;i<k+20;i++){
        v.pb(rqans(n,i) + (i-k));
    }
    ll ans = *min_element(v.begin(),v.end());
    if(k1==1) ans++;
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