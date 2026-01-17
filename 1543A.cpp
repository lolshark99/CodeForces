#include<bits/stdc++.h>
using namespace std;
void solver(){
    long long a;
    long long b;
    cin>>a>>b;
    if(a == b){
        cout<<"0"<<" "<<"0"<<endl;
    }
    else{
        long long max_excitement = abs(a - b);
        long long min_moves = min(a , b);
        cout<<max_excitement<<" "<<min_moves<<endl;
    }
}

int main(){
    int t;
    cin>>t;
    while(t--){
        solver();
    }
}