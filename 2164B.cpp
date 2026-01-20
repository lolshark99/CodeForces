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
    bool flag = 0;
    for(int j = 0 ;  j < n ; j++){
        for(int k = j + 1 ; k < n ;k++){
            if((numbers[k] - numbers[j]) % 2 == 0){
                cout<<numbers[j]<<" "<<numbers[k]<<endl;
                flag = 1;
                return;
            }
        }
    }
    if(!flag){
        cout<<-1<<endl;
    }
}

int main(){
    int t;
    cin>>t;
    while(t--){
        solver();
    }
}