#include<iostream>
using namespace std;

void solve(int t){
    for(int i = 0 ; i < t ; i++){
        int k;
        cin>>k;
        if(k == 1 || k%2 == 1){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }   
    }
}

int main(){
    int t;
    cin>>t;
    solve(t);
}
