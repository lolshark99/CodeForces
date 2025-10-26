#include<bits/stdc++.h>
using namespace std;
/* int sum_calculator(int n , int cost){
    if(n == 0){
        return cost;
    }
    int x = n % 10;
    cost+=x;
    return sum_calculator(n/10 , cost);
    
}
void solver(){
    int n;
    cin>>n;
    int cost = 0;
    int sum = sum_calculator(n , cost);
    cout<<n/sum;
} */


void solver(){
    string s;
    cin>>s;
    int n = s.size();
    bool ok = false;
    int ok_idx = -1;
    int zero = 0;
    for(int i = n - 1 ; i >= 0 ; i--){
        if(s[i] != '0'){
            ok = true;
            ok_idx = i;
        }
        if(ok){
            if(s[i] == '0'){
                zero++;
            }
        }
    }
    cout<<(n - ok_idx - 1) + (ok_idx - zero)<<endl;
}

int main(){
    int t;
    cin>>t;
    while(t--){
        solver();
    }
}