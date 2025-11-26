#include<bits/stdc++.h>
using namespace std;

int main(){
    string s;
    cin>>s;
    
    vector<char>ans;
    
    for(char &d : s){
        d = tolower(d);
        if(d != 'a' && d != 'e'&& d != 'i'&&d != 'o' && d != 'u' && d!='y'){
            ans.push_back(d);
        }
    }
    
    for(char &e : ans){
        cout<<"."<<e;
    }
}