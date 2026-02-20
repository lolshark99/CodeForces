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
    }
    else{
        string t = s+s;
        for(int i = 0 ; i < n ;i++){
            if(s[i] == c){
                ll dist = 0;
                for(int j = i ; j < i + n ; j++){
                    if(t[j] == 'g'){
                        dist = j - i;
                        break;
                    }
                }
                ans = max(ans , dist);
            }
        }
        cout<<ans<<endl;
    }
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