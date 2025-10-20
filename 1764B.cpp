#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int>nums(n);
        for (int i = 0; i < nums.size(); i++)
        {
            cin>>nums[i];
            sort(nums.begin() , nums.end());
        }
        int gcd = nums[0];
        int max_num = *max_element(nums.begin() , nums.end());
        cout<<max_num/gcd<<endl;
    }
}


//GAVE up on this approach!!!!!!!!
/* int solver(int left , int right , vector<int>&nums){
    if(right >= nums.size() || left >= nums.size() - 1){
        return nums.size();
    }
    int new_num  = nums[right] - nums[left];
    for(int i = 0 ; i < nums.size() ;i++){
        if(nums[i] == new_num){
            return solver(left+1 , right+1 , nums);
        }
    }
    nums.push_back(new_num);
    sort(nums.begin() , nums.end());
    return solver(0 , 1 , nums);
}

int main(){
    int n;
    cin>>n;
    int left = 0;
    int right = 1;
    vector<int>nums(n);
    for(int i = 0 ; i < nums.size() ;i++){
        cin>>nums[i];
    }
    int ans = solver(left , right , nums);
    cout<<ans;
} */