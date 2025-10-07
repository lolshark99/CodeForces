#include<bits/stdc++.h>
using namespace std;
/* int main(){
    string s;
    cin>>s;
    int n = s.size();
    unordered_map<char , int >hash;
    for(char c : s){
        hash[c++];
    }
    for(auto it = hash.begin() ; it != hash.end();){
        if(it->second != 1){
            it = hash.erase(it);
        }
        else{
            it++;
        }
    }
    if(hash.size() %2 == 0){
        cout<<"CHAT WITH HER!"<<endl;
    }
    else{
        cout<<"IGNORE HIM!"<<endl;
    }
} */


int main(){
    string s;
    cin>>s;
    unordered_map<char , int>hash;
    for(char c : s){
        hash[c++];
    }
    if(hash.size() %2 == 0){
        cout<<"CHAT WITH HER!"<<endl;
    }
    else{
        cout<<"IGNORE HIM!"<<endl;
    }
}