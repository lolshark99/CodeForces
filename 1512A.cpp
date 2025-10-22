#include<bits/stdc++.h>
using namespace std;
void solve(){
    int n;
    cin>>n;
    vector<int>arr(n);
    unordered_map<int , int>mapp;
    for(int i = 0 ; i < n ;i++){
        cin>>arr[i];
    }
    for(int j : arr){
        mapp[j]++;
    }
    int answer;
    for(auto &p : mapp){
        int number = p.first;
        int frequency = p.second;
        if(frequency == 1){
            answer = number;
            break;
        }
    }
    for(int k = 0 ; k < n ;k++){
        if(arr[k] == answer){
            cout<<k+1<<endl;
        }
    }
}

int main(){
    int t;
    cin>>t;
    while (t--)
    {
        solve();
    }
}