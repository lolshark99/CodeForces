#include<bits/stdc++.h>
using namespace std;

void solver(){
    int n;
    cin>>n;
    vector<int>time(n);
    for(int i = 0 ; i < n ;i++){
        cin>>time[i];
    }
    bool flag  =0;
    for(int j = 0 ; j < n ; j++){
        if(time[j] <= 2*j || time[j] <= 2*(n - j - 1)){
            flag = 1;
            break;
        }
    }
    if(flag){
        cout<<"NO"<<endl;
    }
    else{
        cout<<"YES"<<endl;
    }
}

int main(){
    int t;
    cin>>t;
    while(t--){
        solver();
    }
}