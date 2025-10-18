#include<bits/stdc++.h>
using namespace std;

int main(){
    string s;
    getline(cin , s);
    unordered_map<char , int>frequency;
    for(char c:s){
        if(c >= 'a' && c <= 'z'){
            frequency[c]++;
        }
    }
    cout<<frequency.size();
}