#include<bits/stdc++.h>
using namespace std;
void solver(){
    int n;
    cin>>n;
    vector<string>strs(n);
    for(int i =0 ; i < strs.size(); i++){
        cin>>strs[i];
    }
    string s = "";
    for(int j = 0  ;j < n ;j++){
        string s1 = s + strs[j];
        string s2 = strs[j] + s;
        if(s1 > s2){
            s = s2;
        }
        else{
            s = s1;
        }
    }
    cout<<s<<endl;
}

int main(){
    int t;
    cin>>t;
    while(t--){
        solver();
    }
}