#include<bits/stdc++.h>
using namespace std;

void solver(){
    long long x , y;
    cin>>x>>y;
    
    if(x >= y){ // can decrease serially
        cout<<"YES"<<endl;
        return;
    }

    else if(x == 2){
        if(y == 1 || y== 3){
            cout<<"YES"<<endl;
            return;
        }
    }

    else if(x == 3){
        if(y == 2){
            cout<<"YES"<<endl;
            return;
        }
    }

    else if(x >= 4){
        cout<<"YES"<<endl;
        return;
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