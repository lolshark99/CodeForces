#include<bits/stdc++.h>
using namespace std;

void solver(){
    int n;
    string s,t;
    cin>>n;
    cin>>s>>t;
    sort(s.begin() , s.end());
    sort(t.begin() , t.end());

    if(s == t){
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }
}

int main(){
    int t;
    cin>>t;
    while(t--){
        solver();
    }
}