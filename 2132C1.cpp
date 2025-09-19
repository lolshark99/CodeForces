#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int solve(int t) {
    for (int i = 0; i < t; i++) {
        ll n;
        cin >> n;
        
        const int MAXX = 20;  
        ll prices[MAXX + 1];
        ll cost[MAXX + 1];

        
        for (int j = 0; j <= MAXX; j++) {
            prices[j] = pow(3, j);   
            if (j == 0) {
                cost[j] = 3;         
            } else {
                cost[j] = pow(3, j + 1) + j * pow(3, j - 1);
            }
        }

        ll ans = 0;
        ll temp = n;
        int idx = 0;

       
        while (temp > 0) {
            int d = temp % 3;    
            ans += d * cost[idx];
            temp /= 3;
            idx++;
        }

        cout << ans << "\n";
    }
    return 0;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    solve(t);
}
