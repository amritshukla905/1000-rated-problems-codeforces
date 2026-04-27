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


const int LIMIT = 120000;

vi generate_primes() {
    vector<bool> is_prime(LIMIT, true);
    is_prime[0] = is_prime[1] = false;

    for (int i = 2; i * i < LIMIT; i++) {
        if (is_prime[i]) {
            for (int j = i * i; j < LIMIT; j += i) {
                is_prime[j] = false;
            }
        }
    }

    vi primes;
    for (int i = 2; i < LIMIT; i++) {
        if (is_prime[i]) {
            primes.push_back(i);
        }
    }

    return primes;
}

vi primes = generate_primes();

void solve() {
    int d;
    cin >> d;

    int n1 = 0;
    int idx1 = 0;

    int n = primes.size();

    rep(i, 0, n) {
        if (primes[i] - 1 >= d) {
            n1 = primes[i];
            idx1 = i;
            break;
        }
    }

    ll ans = 0;

    rep(i, idx1, n) {
        if (primes[i] - n1 >= d) {
            ans = 1LL * primes[i] * n1;
            break;
        }
    }

    cout << ans << "\n";
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t = 1;
    cin >> t;
    while (t--) solve();

    return 0;
}