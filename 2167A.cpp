#include<bits/stdc++.h>
using namespace std;

void solver(){
    int a , b, c, d;
    cin>>a>>b>>c>>d;
    vector<int>numbers;
    numbers.push_back(a);
    numbers.push_back(b);
    numbers.push_back(c);
    numbers.push_back(d);


    unordered_map<int , int>mapp;
    
    for(int i = 0 ; i < numbers.size() ;i++){
        mapp[numbers[i]]++;
    }

    
    if(mapp.size() == 1){
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }
    
}
int main(){
    int t;
    cin>>t;
    while(t--){
        solver();
    }
}