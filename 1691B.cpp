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
	vector<ll>shoe_size(n);
	vector<ll>perm(n);
	iota(perm.begin(), perm.end(), 0);
	// if all sizes are different then we cout-1!! as there will always be a scarecity for the child who has the largest size
	for(int i = 0 ; i < n ;i++){
		cin>>shoe_size[i];
	}
	ll start = 0;
	for(int i = 0; i < n ;i++){
		if(i == n-1 || shoe_size[i] != shoe_size[i+1]){
			ll len = i - start + 1;
			if(len == 1){
				cout<<-1<<endl;
				return;
			}
			rotate(perm.begin() + start , perm.begin() + start + 1 , perm.begin() + i + 1);
			start = i + 1;
		}
	}
	for(int i = 0 ; i < n ;i++){
		cout<<perm[i] + 1<<" ";
	}
	cout<<endl;
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