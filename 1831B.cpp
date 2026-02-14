#include<bits/stdc++.h>
using namespace std;
void solver(){
    int n;
    cin>>n;
    vector<long long>arr1(n) , arr2(n);
    unordered_map<long long , long long>mapp1(n) , mapp2(n);
    for(int i = 0 ; i <n ;i++){
        cin>>arr1[i];
    }
    for(int i = 0 ; i <n ;i++){
        cin>>arr2[i];
    }
    //int max2 = INT_MIN;
    //int max1 = INT_MIN;
    long long cur1 = 1;
    long long cur2 = 1;
    mapp1[arr1[0]] = 1;
    mapp2[arr2[0]] = 1;
    for(int j = 1 ; j < n ; j++){
        if(arr1[j] == arr1[j - 1]){
            cur1++;
        }
        else{
            cur1 = 1;
        }
        mapp1[arr1[j]] = max(mapp1[arr1[j]] , cur1);
        if(arr2[j] == arr2[j - 1]){
            cur2++;
        }
        else{
            cur2 = 1;
        }
        mapp2[arr2[j]] = max(mapp2[arr2[j]] , cur2);
    }
    long long ans = 1;
    for(auto&p : mapp1){
        int x = p.first;
        ans = max(ans , mapp1[x] + mapp2[x]);
    }
    for(auto&p : mapp2){
        int x = p.first;
        ans = max(ans , mapp1[x] + mapp2[x]);
    }
    cout<<ans<<endl;
}
int main(){
    int t;
    cin>>t;
    while(t--){
        solver();
    }
}