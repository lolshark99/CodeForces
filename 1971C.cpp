#include<bits/stdc++.h>
using namespace std;
/* 
void solver(){
    int a , b, c, d;
    cin>>a>>b>>c>>d;
    a = a%a;
    b = b%12;
    c = c%12;
    d = d%12;

    if(c > a && c < b){
        cout<<"YES"<<endl;
    }
    

}

int main(){
    int t;
    cin>>t;
    while(t--){
        solver();
    }
} */

void solver(){
    int a , b, c, d;
    cin >> a >> b >> c >> d;

    bool c_in, d_in;

    if(a < b){
        c_in = (c > a && c < b);
        d_in = (d > a && d < b);
    } else {
        c_in = (c > a || c < b);
        d_in = (d > a || d < b);
    }

    if(c_in ^ d_in){
        cout<<"YES"<<endl;
    } else {
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