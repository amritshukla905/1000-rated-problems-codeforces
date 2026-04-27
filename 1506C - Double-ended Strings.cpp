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
    string s1,s2;
    cin>>s1>>s2;
    string a,s;
    if(s1 == s2){
        cout<<0<<"\n";
        return;
    }
    if(s1.size()<=s2.size()){
        a = s1;
        s = s2;
    }
    else{
        a = s2;
        s = s1;
    }
    int n = sz(a);
    vector<string>v;
    rep(i,0,n){
        string temp = "";
        rep(j,i,n){
            temp += a[j];
            v.pb(temp);
        }
    }
    sort(v.begin(), v.end(), [](string &a, string &b) {
        return a.size() > b.size();
    });
    int ans = sz(a)+sz(s);
    for(int i = 0;i<sz(v);i++){
        if(s.find(v[i]) != string::npos){
            ans = (sz(s)+sz(a))-(2*sz(v[i]));
            break;
        }
    }
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