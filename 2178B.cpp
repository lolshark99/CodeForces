#include<bits/stdc++.h>
using namespace std;
void solver(){
    string s;
    int count1 = 0 ;
    int count2 = 0;
    cin>>s;
    for(char c : s){
        if(c == 'Y'){
            count1++;
        }
        else{
            count2++;
        }
    }
    if(count1 > 1){
        cout<<"NO"<<endl;
    }
    else{
        cout<<"YES"<<endl;
    }
}

int main(){
    int t;
    cin>>t;
    while(t--){
        solver();
    }
}