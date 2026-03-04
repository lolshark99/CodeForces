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
	ll n , k;
	cin>>n>>k;
	string s;
	cin>>s;
	ll count = 0;
	for(int i = 0 ; i < k ;i++){
		if(s[i] == 'W'){
			count++;
		}	
	}
	// A simple Sliding window will do
	ll final = count;
	for(int j = k ; j < n ;j++){
		if(s[j-k] == 'W'){
			count--;
		}
		if(s[j] == 'W'){
			count++;
		}
		final = min(count , final);
	}
	cout<<final<<endl;
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