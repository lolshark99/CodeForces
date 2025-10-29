#include<bits/stdc++.h>
using namespace std;
void solver(){
    string s;
    cin>>s;
    int count = 0;
    int real_ans = 0;
    for(int i = 0 ; i < s.size() ; i++){
        if(s[i] == s[i-1]){
            count++;
        }
        else{
            count = 1;
        }
        real_ans = max(count , real_ans);
    }
    if(real_ans >= 7){
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO";
    }
}

int main(){
    solver();
}