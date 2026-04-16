#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    long long t;
    cin>>t;
    while(t--){
        int l,r,L,R;
        cin>>l>>r>>L>>R;
        int mnl = min(l,L);
        int mxR = max(r,R);
        vector<int>v(101);
        int ans = 1;
        for(int i = l;i<=r;i++){
                v[i] = -69;
        }
        for(int i = L;i<=R;i++){
            if(v[i] == -69) ans++;
        }
        if(l==L && r == R){
            ans -=2;
        }
        else if(l == L|| r == R) {
            ans--;
        }
        cout<<ans<<"\n";
    }
    
}