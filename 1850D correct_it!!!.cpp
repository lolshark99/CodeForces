#include<bits/stdc++.h>
using namespace std;

void solver(){
    int n,k;
    cin>>n;
    cin>>k;
    int count = 0;
    vector<int>diff_rating(n);
    for(int i = 0 ; i < n ;i++){
        cin>>diff_rating[i];
    }
    sort(diff_rating.begin() , diff_rating.end());
    for(int j = 0 ; j + 1  < n ;j++){
        if(abs(diff_rating[j] - diff_rating[j+1])> k){
            count++;
        }
    }
    cout<<count+1<<endl;
}

int main(){
    int t;
    cin>>t;
    while(t--){
        solver();
    }
}