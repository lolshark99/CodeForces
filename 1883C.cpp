#include<bits/stdc++.h>
using namespace std;
void solver(){
    int n;
    cin>>n;
    vector<int>nums(n);
    int k;
    cin>>k;
    bool flag4 ;
    for(int i = 0 ; i < n ; i++){
        cin>>nums[i];
    }
    if(k == 2){
        int best = INT_MAX;
        for(int j = 0 ; j < n ;j++){
            if(nums[j] % 2 == 0){
                best = min(best , 0);
            }
            else{
                best = min(best ,1);
            }
        }
        cout<<best<<endl;
    }
    else if(k == 3){
        int best = INT_MAX;
        for(int j = 0 ; j < n ; j++){
            int a = nums[j]%3 ;
            if(a == 0){
                best = 0;
                break;
            }
            else if(a == 1){
                best = min(best , 2);
            }
            else{
                best = min(best , 1);
            }
        }
        cout<<best<<endl;
    }
    else if (k == 4) {
    int eve_count = 0;
    bool has4 = false;
    for (int j = 0; j < n; j++) {
        if (nums[j] % 4 == 0) {
            has4 = true;
            break;
        }
        if (nums[j] % 2 == 0) {
            eve_count++;
        }
    }
    if (has4 || eve_count >= 2) {
        cout << 0 << endl;
        return;
    }
    int best4 = INT_MAX;
    for (int j = 0; j < n; j++) {
        int add = (4 - nums[j] % 4) % 4;
        best4 = min(best4, add);
    }
    int best2 = max(0, 2 - eve_count);
    cout << min(best4, best2) << endl;
    }
    else{
        int best = INT_MAX;
        for(int j = 0 ; j < n ;j++){
            int a = nums[j] % 5;
            if(a == 0){
                best = 0;
                break;
            }
            else if(a == 1){
                best = min(best , 4);
            }
            else if(a == 2){
                best = min(best , 3);
            }
            else if(a == 3){
                best = min(best , 2);
            }
            else if(a == 4){
                best = min(best , 1);
            }
        }
        cout<<best<<endl;
    }
}
int main(){
    int t;
    cin>>t;
    while(t--){
        solver();
    }
}