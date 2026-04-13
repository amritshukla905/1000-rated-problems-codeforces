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
    int n,p;
    cin>>n>>p;
    vi a1(n) , b1(n);
    rep(i,0,n){
        cin>>a1[i];
    }
    rep(i,0,n){
        cin>>b1[i];
    }
    vector<pii> v(n);
    rep(i,0,n){
        v[i].first = b1[i];
        v[i].second = i;
    }
    sort(all(v));
    vi a(n), b(n);
    rep(i,0,n){
        b[i] = v[i].first;
        a[i] = a1[v[i].second];
    }
   // rep(i,0,n){
    //    cout<<a[i]<<","<<b[i]<<" ";
    //}
    ll ans = p;
    if(n==1){
        cout<<ans<<"\n";
        return;
    }
    ll k = 0;
    rep(i,0,n){
        if(b[i] >= p)break;
        k += a[i];
        if(k >= n-1){
            ans += (n-1-(k-a[i]))*b[i];
            k = n-1;
            break;
        }
        else{
            ans += 1ll*a[i]*b[i];
        }
    }
    ll z = (n-1)-k;
    ans += z*p;
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