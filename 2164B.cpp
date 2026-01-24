#include<bits/stdc++.h>
using namespace std;
void solver(){
    int n;
    cin>>n;
    vector<int>nums(n);
    vector<int>even_nums;
    vector<int>odd_nums;
    for(int i = 0 ; i < n ;i++){
        cin>>nums[i];
        if(nums[i] % 2 == 0){
            even_nums.push_back(nums[i]);
        }
        else{
            odd_nums.push_back(nums[i]);
        }
    }
    if(even_nums.size() >= 2){
        cout<<even_nums[0]<<" "<<even_nums[1]<<endl;
        return;
    }
    else{
        for(int j = 0 ; j < odd_nums.size() ;j++){
            for(int k = j + 1 ; k < odd_nums.size() ;k++){
                if(odd_nums[k] % odd_nums[j] == 0 || (odd_nums[k] % odd_nums[j])% 2 == 0){
                    cout<<odd_nums[j]<<" "<odd_nums[k]<<endl;
                    return;
                }
            }
        }
    }
    cout<<-1<<endl;
}
int main(){
    int t;
    cin>>t;
    while(t--){
        solver();
    }
}