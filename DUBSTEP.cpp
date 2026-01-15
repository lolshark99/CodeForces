#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string s;
    cin >> s;

    bool space = false;

    for (int i = 0; i < (int)s.size(); ) {
        if (i + 2 < s.size() && s.substr(i, 3) == "WUB") {
            if (!space) {
                cout << ' ';
                space = true;
            }
            i += 3;
        } else {
            cout << s[i];
            space = false;
            i++;
        }
    }

    return 0;
}
