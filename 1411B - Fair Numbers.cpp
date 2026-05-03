#include <bits/stdc++.h>

using namespace std;

vector<long long> check(long long n) {
    vector<long long>v;
    while (n> 0) {
        v.push_back(n % 10);
        n /= 10;
    }
    return v;
}
int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--) {
        long long n;
        cin >> n;
        for (long long  i = n;; i++){
            vector<long long>z;
            z = check(i);
            bool ok = true;
            for(int j = 0;j<z.size();j++){
                if(z[j] != 0){
                    if(i%z[j] != 0){
                        ok = false;
                        break;
                    }
                }
            }
            if(ok){
                cout<<i<<"\n";
                break;
            }
        }

    }
}