#include<bits/stdc++.h>
using namespace std;

void solver(){
    int n;
    cin>>n;
    vector<int>pos(n);
    int count1 = 0;
    for(int i = 0 ; i < n ; i++){
        cin>>pos[i];
        if(pos[i] %2 == 0){
            count1++;
        }
    }
    cout<<min(count1 , n - count1);
}

int main(){
    solver();
}