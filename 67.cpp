
#include<bits/stdc++.h>
using namespace std;
void solver(){
    int n ;
    cin>>n;
    vector<int>nums(n);
    for(int i = 0 ; i < n ; i++){
        cin>>nums[i];
    }
    bool flag = 0;
    for(int j = 0 ; j < n ;j++){
        if(nums[j] == 67){
            flag = 1;
            break;
        }
    }
    if(flag){
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }
} 
int main(){
    int t;
    cin>>t;
    while(t--){
        solver();
    }
}