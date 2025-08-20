#include<iostream>
#include<cstring>
using namespace  std;

int solve(int n){
    string word;
    for(int i = 0 ; i < n ; i++){
        cin>>word;
        int l = word.size();
        if(l < 10){
            cout<<word<<endl;
        }
        else{
            cout<<word[0]<<l<<word[l - 1]<<endl;
        }
    }
}

int main(){
    int n;
    cin>>n;
    solve(n);
}
