#include<bits/stdc++.h>
using namespace std;

void solver(){
    long long a , b , n;
    cin>>a>>b>>n;
    vector<long long>tools(n);

    for(int i = 0 ; i < n ;i++){
        cin>>tools[i];
    }

    sort(tools.begin() , tools.end());

    /* int count = 1; */
    long long j = 0;
    long long time = 0;
    /* 
    while(b != 0){
        if(tools[j] > a){
            b = a;
            count++;
        }
        else{
            b = min(tools[j] + b , a);
            count++;
        }
        j++;
        b--;
    }
    cout<<count<<endl; */
    for(int j = 0 ; j < tools.size() ; j++){
        if(b > 1){
            time+= b - 1;
            b = 1;
        }
        //now we use tools

        b = min(b + tools[j] , a);
    }
    time += b;
    cout<<time<<endl;
}

int main(){
    int t;
    cin>>t;
    while(t--){
        solver();
    }
}