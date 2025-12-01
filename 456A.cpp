#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    vector<int>price(n);
    vector<int>quality(n);

    bool ans = false;
    
    for(int i = 0 ; i < n ;i++){
        cin>>price[i];
        cin>>quality[i];
    }
    
    for(int j = 0 ; j < n - 1 ; j++){
        long long ratio = price[j]/quality[j];
        long long ratio2 = price[j+1]/quality[j+1];
        if(ratio > ratio2 || ratio == ratio2){
            ans = true;
            break;
        }
    }
    if(ans){
        cout<<"Poor Alex";
    }
    else{
        cout<<"Happy Alex";
    }
}