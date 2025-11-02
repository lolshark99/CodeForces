#include<bits/stdc++.h>
using namespace std;

void solve(){
    int k,n;
    cin>>n;
    cin>>k;
    string s;
    cin>>s;
    unordered_map<char , int>mapp;
    int count  = 0;
    for(char c : s){
        mapp[c]++;
    }
    for(auto i : mapp){
        if(i.second %2 != 0){
            count++;
        }
    }
    if(count <= k + 1){
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