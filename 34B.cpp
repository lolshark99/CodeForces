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
	ll m , n;
	cin>>n>>m;
	ll sum  = 0;
	vector<ll>price(n);
	for(ll i = 0 ; i < n ;i++){
		cin>>price[i];
	}
	sort(price.begin() , price.end());
	for(int i = 0 ; i < n ;i++){
		if(price[i] < 0){
			sum+=price[i];
			m--;
		}
		if(m == 0){
			break;
		}
	}
	cout<<-sum<<endl;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    
    solve();
    

    return 0;
}