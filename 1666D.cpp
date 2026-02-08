#include<bits/stdc++.h>
using namespace std;

void solver(){
    string s, t;
    cin >> s >> t;
    unordered_map<int , int>mapp1;
    unordered_map<int , int>mapp2;
    for(char c : s){
        mapp1[c]++;
    }
    for(char d : t){
        mapp2[d]++;
    }
    if(mapp1.size() != mapp2.size()){
        cout<<"NO"<<endl;
    }
    else if()
}

int main(){
    int q;
    cin >> q;
    while(q--){
        solver();
    }
}
