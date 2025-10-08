#include<bits/stdc++.h>
using namespace std;

void solve(){
    vector<long long>arr;
    long long n , k , x;
    cin>>n>>k>>x;
    long long min = k * (k + 1) / 2;
    long long max = k * (2 * n - k + 1)/2;
    if(x >= min && x <= max){
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }
}
int main(){
    int t;
    cin>>t;
    while(t--){
        solve();
    }
}