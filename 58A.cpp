#include<bits/stdc++.h>
using namespace std;
void solver(){
    string s;
    cin>>s;
    string ans = "hello";
    int j = 0;
    for(int i = 0 ; i < s.size() ;i++){
        if(s[i] == ans[j]){
            j++;
            continue;
        }
        else{
            //j = 0;
            continue;
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