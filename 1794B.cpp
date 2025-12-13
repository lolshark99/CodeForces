#include<bits/stdc++.h>
using namespace std;
void solver(){
    int n;
    cin>>n;
    vector<int>nums(n);
    for(int i = 0 ; i < n ;i++){
        cin>>nums[i];
    }

    for(int j = 0 ; j < n ;j++){
        if(nums[j] == 1){
            nums[j]++;
        }
    }

    for(int l = 0 ; l < n - 1;l++){
        while(nums[l+1] % nums[l] == 0){
            nums[l+1]++;
        }
    }


    for(int k =0 ; k < n ;k++){
        cout<<nums[k]<<" ";
    }
    cout<<endl;
}

int main(){
    int t;
    cin>>t;
    while(t--){
        solver();
    }
}