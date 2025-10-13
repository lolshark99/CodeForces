#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<int>pos_storage;
    for(int i = 0 ; i < n ;i++){
        int x;
        cin>>x;
        pos_storage.push_back(x);
    }
    int count = 0;
    // basic idea is that when there is a break from a sequence of same values we then increment the count as that whole sequence represents 1 single magnet.
    for(int i = 0 ; i < pos_storage.size() ; i++){
        if(pos_storage[i] != pos_storage[i+1]){
            count++;
        }
    }
    cout<<count;
}