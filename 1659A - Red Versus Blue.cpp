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
    ll n,r,b;
    cin>>n>>r>>b;
    string ans = "";
    string p = "";
    ll k = r/(b+1);
    while(k--){
        p += 'R';
    }
    ll z = r%(b+1);
    string pr = "";
    if(z > 0){
        pr = p + 'R';
    }
    while(z--){
        ans += pr;
        ans += 'B';
    }
    ll z1 = b+1-(r%(b+1));
    while(z1>1){
        ans += p;
        ans += 'B';
        z1--;
    }
    ans += p;
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