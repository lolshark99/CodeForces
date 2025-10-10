#include <bits/stdc++.h>
using namespace std;

bool solve_recursive(int s, int idx, const vector<pair<int,int>> &dragons) {
    int n = dragons.size();
    if (idx == n) return true;           
    if (s <= dragons[idx].first) return false; 

    s += dragons[idx].second;
    return solve_recursive(s, idx + 1, dragons);
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int s, n;
    if (!(cin >> s >> n)) return 0;

    vector<pair<int,int>> dragons(n);
    for (int i = 0; i < n; ++i) {
        cin >> dragons[i].first >> dragons[i].second;
    }

    sort(dragons.begin(), dragons.end());

    if (solve_recursive(s, 0, dragons))
        cout << "YES\n";
    else
        cout << "NO\n";

    return 0;
}
