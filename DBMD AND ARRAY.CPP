#include<bits/stdc++.h>
#include <algorithm>
using namespace std;
void solver(){
    long long n , s , x;
    cin>>n>>s>>x;
    vector<long long>nums(n);
    long long sum = 0;
    for(int i = 0 ;i < n ;i++){
        cin>>nums[i];
        sum+=nums[i];
    }
    long long rem = s - sum;
    if(rem % x == 0 && sum <= s){
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }
}