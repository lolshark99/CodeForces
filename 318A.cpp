#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<int>nums;
    for(int i = 1 ; i < n ;i++){
        if(i%2 == 0){
            nums.push_back(i);
        }
        if(i%2 != 0){
            nums.push_back(i);
        }
    }
}