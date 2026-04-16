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
    if(n%2 == 0){
        cout<<n/2<<" "<<n/2<<"\n";
        return;
    }
    ll k = 0;
    bool ok = false;
    for(int i = 2;i*i*1ll<=n;i++){
        if(n%i == 0){
            k = i;
            ok = true;
            break;
        }
    }
    if(ok){
        cout<<n/k<<" "<<(n-n/k)<<"\n";
    }
    else{
        cout<<1<<" "<<(n-1)<<"\n";
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t = 1;
    cin >> t;
    while (t--) solve();

    return 0;
}