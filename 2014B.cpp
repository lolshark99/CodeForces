#include<iostream>
using namespace std;

int sum(int arr[], int n){
    int total = 0;
    for(int i = 0; i < n; i++){
        total += arr[i];
    }
    return total;
}

void solve(int t){
    long long n, k;
    for(int i = 0; i < t; i++){
        cin >> n >> k;

        long long m = (k < n ? k : n);   // alive years
        long long start = n - m + 1;     // first alive year
        long long len = m;               // number of years alive

        long long oddCount;
        if(start % 2 == 0){
            oddCount = len / 2;
        } else {
            oddCount = (len + 1) / 2;
        }

        if(oddCount % 2 == 0){
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }
}

int main(){
    int t;
    cin >> t;
    solve(t);
}

