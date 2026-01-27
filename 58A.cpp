#include<bits/stdc++.h>
using namespace std;
void solver(){
    string s;
    cin>>s;
    string ans = "hello";
    int j = 0 ;
    for(char c : s){
        if(c == s[j]){
            j++;
        }
        if(j == ans.size()){
            break;
        }
    }
    if(j == ans.size()){
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }
}
int main(){
    solver();
}