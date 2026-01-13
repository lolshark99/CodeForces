#include<bits/stdc++.h>
using namespace std;
void solver(){
    string s;
    cin>>s;
    long long count0;
    long long count1;
    int n = s.size();
    for(char c : s){
        if(c == '0'){
            count0++;
        }
        else{
            count1++;
        }
    }
    int moves = min(count0 , count1);
    if(moves % 2 != 0){
        cout<<"DA"<<endl;
    }
    else{
        cout<<"NET"<<endl;
    }
}

int main(){
    long long t;
    cin>>t;
    while(t--){
        solver();
    }
}