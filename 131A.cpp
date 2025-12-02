#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    cin >> s;
    int n = s.size();

    bool allUpper = true;
    for(char c : s) {
        if(!isupper(c)) {
            allUpper = false;
            break;
        }
    }

    bool firstLowerRestUpper = islower(s[0]);
    for(int i = 1; i < n; i++) {
        if(!isupper(s[i])) {
            firstLowerRestUpper = false;
            break;
        }
    }

    if(allUpper || firstLowerRestUpper) {
        for(char &c : s) {
            if(islower(c)) c = toupper(c);
            else c = tolower(c);
        }
    }

    cout << s;
}
