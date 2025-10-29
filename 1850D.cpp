#include<bits/stdc++.h>
using namespace std;

void solver(){
    int n,k;
    cin>>n;
    cin>>k;
    int count = 1;
    int ans = 1;
    vector<int>diff_rating(n);
    for(int i = 0 ; i < n ;i++){
        cin>>diff_rating[i];
    }
    sort(diff_rating.begin() , diff_rating.end());
    for(int j = 1 ; j < n ;j++){
        if((diff_rating[j] - diff_rating[j-1]) > k){
            count = 1;
        }
        else{
            count++;
        }
        ans = max(ans,count);
    }
    cout<<n - ans<<endl;
    
}

int main(){
    int t;
    cin>>t;
    while(t--){
        solver();
    }
}