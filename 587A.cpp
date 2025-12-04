#include<bits/stdc++.h>
using namespace std;


/* 
    long long max_num = (long long)(powl(10, n) - 1);
    long long min_num = (long long)powl(10, n - 1);
    
    double k = ceil((double)min_num / t);

    // we check that is there a k st k*t lies in the range of min and max numbers 
    if(k*t >= min_num && k*t <= max_num){
        cout << (long long)(k*t) << endl;
    }
    else{
        cout << -1 << endl;
    } */

int main(){
    long long n; int t;
    if (!(cin >> n >> t)) return 0;

    if (t == 10) {
        if (n == 1) cout << -1 << '\n';
        else cout << '1' << string((size_t)(n-1), '0') << '\n';
    } else {
        cout << t << string((size_t)(n-1), '0') << '\n';
    }
    return 0;
}


