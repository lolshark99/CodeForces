#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int T;
    cin >> T;
    while (T--) {
        int n;
        cin >> n;
        string s;
        cin >> s;               
        int left = 0, scan = 0; 
        int ans = 0;
        while (left < n && s[left] == 'B') {
            ++left;
            ++scan;
        }
        while (left < n) {
            int cntA = 0, cntB = 0;
            while (scan < n && s[scan] == 'A') {
                ++scan;
                ++cntA;
            }
            while (scan < n && s[scan] == 'B') {
                ++scan;
                ++cntB;
            }
            if (cntB > 0) {
                ans += (scan - left - 1);
                left = scan - 1;
            } else {
                break;
            }
        }

        cout << ans << '\n';
    }

    return 0;
}
