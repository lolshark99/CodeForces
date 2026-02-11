#include<bits/stdc++.h>
using namespace std;
void solver(){
    int n ;
    cin>>n;
    vector<long long>arr1(n) , arr2(n);
    for(int i = 0 ; i < n ;i++){
        cin>>arr1[i];
        cin>>arr2[i];
    }
    int curr_len_1 = 1;
    int max_len_1 = 1;
    //int comp = arr1[0];
    for(int j = 1 ; j < n ; j++){
        if(arr1[j == arr1[j - 1]]){
            curr_len_1++;
            if(curr_len_1 > max_len_1){
                max_len_1 = curr_len_1;
            }
        }
        else{
            curr_len_1 = 1;
        }
    }
    int max_len_2 = n - max_len_1;
    int curr_len_2 = 1;
    int max_len_2 = 1;
    //int comp = arr1[0];
    for(int j = 1 ; j < n ; j++){
        if(arr1[j == arr1[j - 1]]){
            curr_len_2++;
            if(curr_len_2 > max_len_2){
                max_len_2 = curr_len_2;
            }
        }
        else{
            curr_len_2 = 1;
        }
    }
    if()
}

int main(){
    int t;
    cin>>t;
    while(t--){
        solver();
    }
}