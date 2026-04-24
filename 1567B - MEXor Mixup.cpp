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
    ll ans = 0;
    if((a-1)%4 == 0) ans = a-1;
    else if((a-1)%4 == 3) ans = 0;
    else if((a-1)%4 == 2) ans = a;
    else if((a-1)%4 == 1) ans = 1;
    if(ans == b) cout<<a<<"\n";
    else if(((ans ^ b) != a)) cout<<(a+1)<<"\n"; 
    else cout<<(a+2)<<"\n";
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t = 1;
    cin >> t;
    while (t--) solve();

    return 0;
}