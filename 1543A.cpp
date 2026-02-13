#include<bits/stdc++.h>
using namespace std;
/* void solver(){
    long long a;
    long long b;
    cin>>a>>b;
    if(a == b){
        cout<<0<<" "<<0<<endl;
    }
    else{
        long long max_excitment = abs(a - b); 
        long long min_moves = min(a%max_excitment , max_excitment - a%max_excitment);
        cout<<max_excitment<<" "<<min_moves<<endl;
    }
} */

void solver(){
    long long a,b;
    cin>>a>>b;

    if(a == b){
        cout << a << " " << 0 << endl;
        return;
    }

    long long d = abs(a - b);
    long long r = a % d;

    long long min_moves = min(r, d - r);

    cout<<d<<" "<<min_moves<<endl;
}

int main(){
    int t;
    cin>>t;
    while(t--){
        solver();
    }
}