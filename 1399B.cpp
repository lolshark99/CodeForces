#include<bits/stdc++.h>
using namespace std;

void solve(){
    int n;
    cin>>n;
    vector<int>a(n);
    vector<int>b(n);
    for(int i = 0 ; i < n ;i++){
        cin>>a[i];
    }
    for(int i = 0 ; i < n ;i++){
        cin>>b[i];
    }
    long long count = 0;
    long long a_min = *min_element(a.begin() , a.end());
    long long b_min = *min_element(b.begin() , b.end());
    for(int i = 0 ;  i < a.size() ;i++){
        count+=max(a[i] - a_min , b[i] - b_min);
    }
    cout<<count<<endl;
}



int main(){
    int t;
    cin>>t;
    while(t--){
        solve();
    }
}