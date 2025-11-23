#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int>score(3);

    for(int i = 0 ; i < 3 ;i++){
        cin>>score[i];
    }

    sort(score.begin() , score.end());

    if(abs(score[0] - score[2]) >= 10){
        cout<<"check again"<<endl;
    }
    else{
        cout<<"final "<<score[1];
    }

}