#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef unsigned long long ull;
typedef long double lld;
typedef vector<int> vi;
typedef vector<long long> vll;
typedef pair<int,int> pii;
typedef pair<long long,long long> pll;

const ll INF = 1e18;
const ll MOD = 1e9 + 7;

void solve() {
	ll n;
	string s;
	cin>>n;
	cin>>s;
	ll count = 0;
	for(char c : s){
		if(c == '1'){
			count++;
		}
	}
	for(ll i = 1 ; i < n ;i++){
		if(s[i] == '1' && s[i + 1] == '1' || s[i] == '0' && s[i + 1] == '1'){
			count++;
		}
	}
	cout<<count<<endl;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t ;
    cin >> t;  

    while (t--) {
        solve();
    }

    return 0;
}