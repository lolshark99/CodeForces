#include<bits/stdc++.h>
using namespace std;
void solver(){
    int n;
    cin>>n;
    vector<int>numbers(n);
    for(int i = 0 ; i < n ;i++){
        cin>>numbers[i];
    }
    // if diff between any 2 nos is even then its mod is even also!!
    for(int j = 0 ; j < n ;j++){
        int ans1 , ans2;
        if(numbers[j] %2 == 0){
            int ans1 = numbers[j];
            for(int k = 1 ; k < n ;k++){
                if(numbers[k] % 2 == 0){
                    int ans2 = numbers[k];
                }
            }
        }
        else if(numbers[j] %2 != 0){
            int ans1 = numbers[j];
            for(int k = 1 ; k < n ;k++){
                if(numbers[k] %2 != 0){
                    int ans2 = numbers[k];
                }
            }
            cout<<ans1<<" "<<ans2<<endl;
        }
        else{
            cout<<-1<<endl;
        }
    }
}

int main(){
    int t;
    cin>>t;
    while(t--){
        solver();
    }
}