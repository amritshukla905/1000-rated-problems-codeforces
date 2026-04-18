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
    char ch;
    string s;
    cin>>n>>ch>>s;
    ll mx = INT_MIN;
    s += s;
    if(n==1){
        cout<<0<<"\n";
        return;
    }
    ll idx = 0;
    rep(i,0,2*1ll*n){
        if(s[i] == ch){
            idx = i;
            break;
        }
    }
    rep(i,idx,2*1ll*n){
        if(s[i] == ch && s[idx] == 'g'){
            idx = i;
        }
        if(s[i] == 'g' && s[idx] == ch){
            mx = max(mx,(i-idx));
            idx = i;
        }
    }
    cout<<mx<<"\n";
    
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t = 1;
    cin >> t;
    while (t--) solve();

    return 0;
}