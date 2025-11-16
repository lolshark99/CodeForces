#include<bits/stdc++.h>
using namespace std;
void solver(){
    int a ,b , c, d;
    cin>>a>>b>>c>>d;
    //check for the triangle cond of all possible triplets
    if((a + b > c && a + c > b && b + c > a) || (b + c > d && c + d > b && b + d > c) || (a + c > d && c + d > a && a + d > c) || (a + b > d && a + d > b && b + d > a)){
        cout<<"TRIANGLE";
    }
    //check for the segment cond of all possible triplets
    else if((a + b == c || a + c == b || b + c == a) || (b + c == d || c + d == b || b + d == c) || (a + c == d || c + d == a || a + d == c) || (a + b == d || a + d == b || b + d == a)){
        cout<<"SEGMENT";
    }

    else{
        cout<<"IMPOSSIBLE";
    }
}

int main(){
    solver();
}