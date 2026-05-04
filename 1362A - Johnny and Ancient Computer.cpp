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
    ll a,b;
    cin>>a>>b;
    
    if(a == b){
        cout<<0<<"\n";
        return;
    }
    ll x = max(a,b);
    ll y = min(a,b);
    int cnt = 0;
    while(1){
        if(x%2 != 0){
            cout<<-1<<"\n";
            return;
        };
        x /= 2;
        cnt++;
        if(x <= y){
            break;
        }
    }
    if(x < y) {
        cout<<-1<<"\n";
        return;
    }
    ll ans = cnt/3;
    if(cnt%3 != 0) ans++;
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