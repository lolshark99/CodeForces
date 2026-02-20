#include <bits/stdc++.h>
using namespace std;

#define ll long long

void solve() {
    int n;
    char c;
    string s;
    ll ans = 0;
    cin >> n >> c;
    cin >> s;
    if(c == 'g'){
        cout<<0<<endl;
        return;
    }
    else{
        string t = s + s// sequence will repeat
        ll last = -1;
        for(int i = 2*n - 1 ; i >= 0 ; i--){
            if(t[i] == 'g'){
                last = i;
            }
            if(i < n && t[i] == c){
                ans  =max(ans , last - i);
            }
        }
    }
    cout<<ans<<endl;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while(t--) {
        solve();
    }

    return 0;

}
