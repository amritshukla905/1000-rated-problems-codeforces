#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef pair<int,int> pii;
typedef vector<int> vi;

#define all(x) (x).begin(), (x).end()
#define sz(x) (int)(x).size()
#define pb push_back
#define F first
#define S second
#define rep(i,a,b) for(int i=a;i<b;i++)

#ifndef ONLINE_JUDGE
#define debug(x) cerr << #x << " = " << x << "\n"
#else
#define debug(x)
#endif

void solve() {
    int n;
    cin >> n;
    string a, b;
    cin >> a >> b;

    int even0 = 0, odd0 = 0;

    rep(i,0,n){
        if(i % 2 == 0){
            if(a[i] == '0') even0++;
            if(b[i] == '0') odd0++;
        } else {
            if(a[i] == '0') odd0++;
            if(b[i] == '0') even0++;
        }
    }

    int needEven = (n + 1) / 2;
    int needOdd = n / 2;

    if(even0 >= needEven && odd0 >= needOdd)
        cout << "YES\n";
    else
        cout << "NO\n";
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while(t--) solve();

    return 0;
}