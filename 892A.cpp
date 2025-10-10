#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;
    vector<long long> rem(n), cap(n);//a -> rem , b-> cap

    for (int i = 0; i < n; i++) cin >> rem[i];
    for (int i = 0; i < n; i++) cin >> cap[i];

    sort(cap.rbegin(), cap.rend()); 

    long long largest = cap[0];
    long long second_largest = cap[1];
    long long sum = accumulate(rem.begin(), rem.end(), 0LL);

    if (sum > largest + second_largest)
        cout << "NO\n";
    else
        cout << "YES\n";
}

int main() {
    solve();
    return 0;
}
