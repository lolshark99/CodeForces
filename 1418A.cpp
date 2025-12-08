#include<bits/stdc++.h>
using namespace std;

void solver(){
    long long x , y , k;
    cin>>x>>y>>k;
    long long a = (k + k*y) - 1;
    long long b = x - 1;
    cout<<(a+b-1)/b + k<<endl;

}

int main(){
    int t;
    cin>>t;
    while (t--)
    {
        solver();
    }
    
}