#include<bits/stdc++.h>
using namespace std;

void solver(){
    int n;
    int r;
    int y;

    cin>>n;
    cin>>y>>r;
    
    int ans =r+floor(y/2);
    if(ans > n){
        cout<<n<<endl;
    }
    else{
        cout<<ans<<endl;
    }
}

int main(){
    int t;
    cin>>t;
    while(t--){
        solver();
    }
}