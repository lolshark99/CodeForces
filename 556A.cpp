#include<bits/stdc++.h>
using namespace std;

void solver(){
    unordered_map<char , int>mapp;
    int n;
    cin>>n;
    string s;
    cin>>s;
    for(char c : s){
        mapp[c]++;
    }
    cout<<abs(mapp['0'] - mapp['1']);
}

int main(){
    solver();
}