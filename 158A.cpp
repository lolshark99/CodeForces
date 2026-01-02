#include<bits/stdc++.h>
using namespace std;

void solver(){
    int n;
    int k;
    cin>>n>>k;
    vector<int>scores(n);

    for(int i = 0 ; i < n ;i++){
        cin>>scores[i];
    }
    int count = 0;
    for(int j = 0 ; j < scores.size() ;j++){
        if(scores[j] >= scores[k - 1] && scores[j] > 0){
            count++;
        }
    }
    cout<<count<<endl;
}

int main(){
    solver();
}