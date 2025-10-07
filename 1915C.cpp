#include<iostream>
#include<cmath>
using namespace std;

void solve(){
    long long n;
    long long a;
    cin>>n;
    long long sum = 0;
    while(n--){
        cin>>a;
        sum+=a;
    }
    long long root = sqrt(sum);
    if(root*root == sum){
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