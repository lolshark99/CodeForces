#include<bits/stdc++.h>
using namespace std;

void solver(){
    int n , k;
    cin>>n>>k;
    string s;
    cin>>s;

    int count = 0;
    for(int i = 0 ; i < n;){
        if(s[i] == '0'){
            count++;
            i++;
        }
        else if(s[i] == '1'){
            i+=k + 1;
        }
    }
    cout<<count<<endl;
}

int main(){
    int t;
    cin>>t;
    while(t--){
        solver();
    }    
}