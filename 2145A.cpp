#include<bits/stdc++.h>
using namespace std;

void solver(){
    int n;
    cin>>n;
    int mod = n%3;
    if(mod == 0){
        cout<<0<<endl;
        return;
    }
    cout<<3 - mod<<endl;
}

int main(){
    int t;
    cin>>t;
    while(t--){
        solver();
    }
}