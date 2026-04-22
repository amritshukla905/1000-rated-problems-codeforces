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
    ll n,k,b,s;
    cin>>n>>k>>b>>s;
    vll v(n, 0);

    ll p = k*b + (k-1)*n; 

    if(s < k*b || s > p){
        cout<<-1<<"\n";
        return;
    }
    ll z = k*b + (k-1);
    if(s < z){
        v[0] = s;
    }
    else{
        v[0] = z;
    }
    ll s1 = v[0];

    rep(i,1,n){
        if(s1 + k-1 <= s) {
            v[i] = k-1;
            s1 += k-1;
        }
        else if(s1 < s) {
            v[i] = s - s1;
            s1 = s;
            break;
        }
        else break;
    }

    rep(i,0,n) cout<<v[i]<<" ";
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