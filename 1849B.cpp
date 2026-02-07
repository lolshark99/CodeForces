#include<bits/stdc++.h>
using namespace std;
void solve_rec(int j, int n, vector<long long>& health, vector<int>& order) {
    if (j == n) return; 
    if (health[j] == 0) {
        order.push_back(j);
        solve_rec(j + 1, n, health, order);
    } else {
        solve_rec(j + 1, n, health, order);
    }
}
void solver() {
    int n, k;
    cin >> n >> k;
    vector<long long> health(n);
    for (int i = 0; i < n; i++) {
        cin >> health[i];
        health[i] %= k;
    }
    vector<int> order;
    solve_rec(0, n, health, order);
    for (int x : order){
        cout<<x;
    }
    cout << endl;
}


int main(){
    int t;
    cin>>t;
    while(t--){
        solver();
    }
}