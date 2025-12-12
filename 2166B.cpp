#include<bits/stdc++.h>
using namespace std;

void solver(){
    long long a , b , m;
    cin>>a>>b>>m;

    /* double len  = min(b , a/m);
    int needed_len = len*m; */
/* 
    if(needed_len > a){
        cout<<2<<endl;
    }
    else{
        cout<<1<<endl;
    } */
   // assuming that b is the default len of tab if n*b < a then no need to move cursor!!
    if(b * m <= a || b >= a){
        cout<<1<<endl;
    }
    else{
        cout<<2<<endl;
    }
}

int main(){
    int t;
    cin>>t;
    while(t--){
        solver();
    }
}
