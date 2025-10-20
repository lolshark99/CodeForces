#include<bits/stdc++.h>
using namespace std;

void solve(int n , int k){
    unordered_map<int , int>mapp;
    string s;
    cin>>s;
    for(char c : s){
        mapp[c - '0']++;
    }
    int minn = max(mapp[0] , mapp[1]) - n / 2;
    int maxx = ((mapp[0] - 1)*mapp[0])/2 +  ((mapp[1] - 1)*mapp[1])/2; 
    if(k >= minn && (k - minn) % 2 == 0 && k <= maxx){
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
        int n;
        int k;
        cin>>n;
        cin>>k;
        solve(n , k);
    }
}