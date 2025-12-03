#include<bits/stdc++.h>
using namespace std;

void solver(){
    int x , y;
    cin>>x>>y;

    if(x == y){
        cout<<"YES"<<endl;
    }

    else if((x * 1.5 )== y){
        cout<<"YES"<<endl;
    }

    else if(abs(x - y) == 1){
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