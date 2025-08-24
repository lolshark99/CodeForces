#include<iostream>
using namespace std;

void solve(int t){
    int a,x,y;
    for(int i = 0 ; i < t ; i++){
        cin>>a>>x>>y;
        if((a > x && a < y) || (a > y && a < x) ){
            cout<<"NO"<<endl;
        }
        else{
            cout<<"YES"<<endl;
        }
    }
}

int main(){
    int t;
    cin>>t;
    solve(t);
}