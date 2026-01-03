#include<bits/stdc++.h>
using namespace std;
void solver(){
    long long n;
    cin>>n;
    
    if(n % 2 != 0 || n < 4){
        cout<<-1<<endl;
    }

    double max = n / 4;
    double min = n / 6;

    cout<<ceil(min)<<" "<<max<<endl;

}

int main(){
    int t;
    cin>>t;
    while(t--){
        solver();
    }
}