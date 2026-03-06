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
	ll n , r, b;
	//string s = iota()
	cin>>n>>r>>b;
	char s[n];
	// longest continous chain of of Rs we can have until we need to put a B
	ll r_count = r / (b+ 1);
	ll rem = r % (b + 1);
	ll pos = 0;
	for(int i = 0 ; i <= b ;i++){
		for(int j = 0 ; j < r_count ;j++){
			s[pos++] = 'R';
		}
		if(rem > 0){
			s[pos++] = 'R';
			rem--;
		}
		if(i < b){
			s[pos++] = 'B';
		}
	}
	for(int k = 0 ; k < n ;k++){
		cout<<s[k];
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