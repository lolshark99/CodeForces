#include<bits/stdc++.h>
using namespace std;
void solver() {
    int n;
    cin >> n;
    vector<long long> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    sort(a.begin(), a.end());
    a.erase(unique(a.begin(), a.end()), a.end());
    int best = 0;
    int curr = 1;
    for (int i = 1; i < n; i++) {
        if (a[i] == a[i - 1] + 1) {
            curr++;
        } else {
            best = max(best, curr);
            curr = 1;
        }
    }
    best = max(best, curr);
    cout<<best<<endl;;
} 

int main(){
    int t;
    cin>>t;
    while(t--){
        solver();
    }
}