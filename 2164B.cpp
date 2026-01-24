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
        for(int k = j + 1 ; k < n ;k++){
            if((nums[k] % nums[j]) % 2 == 0){
                cout<<nums[j]<<" "<<nums[k]<<endl;
                return;
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