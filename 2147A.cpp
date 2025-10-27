#include<bits/stdc++.h>
using namespace std;

void solver(){
    int x , y;
    cin>>x>>y;
    if(x== y +1 || y==1 || x == y){  // include cases where we would have to cover -ve distance on x or y axis
        cout<<-1<<endl;
    }
    else if(y > x){ // basic 2 step path possible here !!
        cout<<2<<endl;
    }
    else{
        cout<<3<<endl;
    }
}

int main(){
    int t;
    cin>>t;
    while(t--){
        solver();
    }
}