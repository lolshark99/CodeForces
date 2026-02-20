#include <bits/stdc++.h>
using namespace std;

#define ll long long

void solve() {
	int n,d;
	cin>>n>>d;
	ll count = 0;
	std::vector<int>powers(n);
	for(int i = 0 ; i < n ; i++){
		cin>>powers[i];
	}
	sort(powers.rbegin() , powers.rend());
	ll i = 0;
	ll j = n - 1;
	while(i <= j){
		ll pow = powers[i];
		ll needed = d / pow + 1;
		if(i + needed - 1 <=j){
			i++;
			count++;
			j -=(needed - 1);
		}
		else{
			break;
		}
	}
	cout<<count<<endl;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    solve();
    return 0;
}