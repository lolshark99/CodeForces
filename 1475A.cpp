#include<bits/stdc++.h>
using namespace std;

void solver(){
    long long n;
    cin>>n;

    /* if(n <= 10){
        if(n %2 == 0 ){
            cout<<"NO"<<endl;
        }
        else{
            cout<<"YES"<<endl;
        }
    }

    else if(n > 10){
        if(n % 2 == 0){
            cout<<"NO"<<endl;
        }
        else{
            cout<<"YES"<<endl;
        }
    } */

    while(n %2 == 0){
        n = n /2;
    }

    if(n != 1){
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