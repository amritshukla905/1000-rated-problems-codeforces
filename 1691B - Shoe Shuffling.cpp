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
    cin>>n;
    vll v(n);
    vll z;
    vll ans;
    rep(i,0,n)cin>>v[i];
    bool ok = true;
    rep(i,1,n-1){
        if((v[i] != v[i-1]) && (v[i] != v[i+1])) ok = false;
    }
    if((v[0] != v[1]) || (v[n-1] != v[n-2])) ok = false;
    
    if(!ok){
      cout<<-1<<"\n";
      return;
    } 
    ll cnt = 1;
    rep(i,1,n){
        if(v[i] == v[i-1])cnt++;
        else{
            z.pb(cnt);
            cnt = 1;
        }
    }
    z.pb(cnt);
    cout<<"\n";
    cnt = 1;
    ll mx = 0;
    rep(i,0,z.size()){
        mx += z[i];
        ll pp = mx;
        ans.pb(mx);
        while(cnt<pp){
            ans.pb(cnt);
            cnt++;
        }
        cnt++;
    }
    rep(i,0,n)cout<<ans[i]<<" ";
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