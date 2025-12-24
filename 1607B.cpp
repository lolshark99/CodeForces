#include<bits/stdc++.h>
using namespace std;

void solver(){
    long long x , n;
    cin>>x>>n;
    
    long long final_dist = 0;
    if(n % 4 == 0){
        final_dist= 0;
    }
    else if(n % 4 == 1){
        final_dist = n;
    }
    else if(n % 4 == 2){
        final_dist = -1;
    }
    else{
        final_dist = -(n + 1);
    }

    if( x % 2 == 0){
        cout<<x - final_dist<<endl;
    }

    else{
        cout<< x + final_dist<<endl;
    }
    
}

int main(){
    int t;
    cin>>t;
    while(t--){
        solver();
    }
}