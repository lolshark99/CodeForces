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
	ll n , k , b, s;
	cin>>n>>k>>b>>s;
	vector<ll>arr(n , 0);
	if(s < k*b){
		cout<<-1<<endl;
		return;
	}
	arr[n- 1] =  (k * b); // be greedy by beauty
	ll rem = s - arr[n-1];
	if(rem > n  * (k-1)){
		cout<<-1<<endl;
		return;
	}
	else{
		// keep pushin atmost k - 1 every time and decrease it untill we get ans
		for(int i = 0 ; i < n && rem > 0 ; i++){
			ll added = min(rem , k -1);
			arr[i] += added;
			rem-=added;
		}
	}
	for(int j = 0 ; j < n ; j++){
		cout<<arr[j]<<" ";
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