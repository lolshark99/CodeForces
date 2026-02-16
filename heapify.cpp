#include<bits/stdc++.h>
using namespace std;
int root_find(int x){
    while(x % 2 == 0){
        x/=2;
    }
    return x;
}
// this is somewhat (or fully) similiear to a tree traversal as we always go to a *2 index from the root 
void solver(){
    int n;
    cin>>n;
    vector<int>nums(n);
    for(int i = 0; i < n; i++){
        cin>>nums[i];
    }
    for(int i = 0; i < n; i++){
        if(root_find(i + 1) != root_find(nums[i])){
            cout<<"NO"<<endl;
            return;
        }
    }
    cout<<"YES"<<endl;
}
int main(){
    int t;
    cin>>t;
    while(t--){
        solver();
    }
}