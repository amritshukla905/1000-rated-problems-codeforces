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
#define rep(i, a, b) for (long long i = a; i <= b; i++)
    #define rrep(i, a, b) for (int i = a; i >= b; i--)


        #ifndef ONLINE_JUDGE
#define debug(x) cerr << #x << " = " << x << "\n"
#else
#define debug(x)
#endif


void solve() {
    ll x,k;
    cin >> x>>k;
    bool ok = false;
    
    rep(i,2,(ll)sqrt(x)){
        if(x%i == 0){
            ok = true;
            break;
        }
    }
   
    if(k == 1 && x == 1) cout<<"NO"<<"\n";
    else if((k == 1 && !ok) || (k == 1 && x == 2) ||(x == 1 && k == 2)  ) cout<<"YES"<<"\n";
    else cout<<"No"<<"\n";
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t = 1;
    cin >> t;
    while (t--) solve();

    return 0;
}