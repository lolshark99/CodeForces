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
	cin>>n;
	string s;
	cin>>s;
	ll count = 1;// min ans will be 1 always
	// ll count2 = 0;
	// unordered_map<char , ll>freq;
	// for(char c : s){
	// 	freq[c]++;
	// }
	// if(freq.size() == 1){
	// 	cout<<count<<endl;
	// }
	// else{
	// 	for(int i = 1 ; i < n ;i++){
	// 	 	if(s[i] != s[i - 1]){
	// 	 		count2++;
	// 	 	}
	// 	}
	// 	cout<<1 + count2<<endl;
	// 
	for(int i = 1; i < n ;i++){
		if(s[i] != s[i-1]){
			count++;
		}
	}
	if(s[0] != s[n-1]){
		count = min(n , count + 1);
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