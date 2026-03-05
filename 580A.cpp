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
	vector<ll>revenue(n);
	for(int  i = 0  ; i < n ;i++){
		cin>>revenue[i];
	}
	ll curr_len = 1;
	ll max_len = 1;
	for(int i = 0 ; i <n - 1 ;i++){
		if(revenue[i] < revenue[i+1] || revenue[i] == revenue[i+1]){
			curr_len++;
		}
		else{
			curr_len = 1;
		}
		max_len = max(max_len , curr_len);
	}
	cout<<max_len;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    solve();
    return 0;
}