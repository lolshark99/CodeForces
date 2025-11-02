#include<bits/stdc++.h>
using namespace std;
void solver(){
    int count = 0;
    int n;
    cin>>n;
    vector<int>coin_value(n);
    for(int i = 0 ; i < n ;i++){
        cin>>coin_value[i];
    }
    sort(coin_value.rbegin() , coin_value.rend());
    int sum = accumulate(coin_value.begin() , coin_value.end() , 0);
    int sum2 = 0;
    for(int j = 0 ; j < n ;j++){
        sum2+=coin_value[j];
        sum-=coin_value[j];
        count++;
        if(sum2 > sum){
            break;   
        }
    }
    cout<<count;
}

int main(){
    solver();
}
