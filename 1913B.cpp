#include<bits/stdc++.h>
using namespace std;
void solver(){
    string s;
    cin>>s;
    int count0 = 0;
    int count1 = 0;
    for(char c : s){
        if(c == '1'){
            count1++;
        }
        else{
            count0++;
        }
    }
    int n = s.size();
    //int r = min(count0 , count1);
    int r = abs(count0 - count1); 
    if(n == 1){
        cout<<1<<endl;
    }
    else if(count0 == count1){
        cout<<0<<endl;
    }
    else{
        cout<<n - r<<endl;
    }
}
int main(){
    int t;
    cin>>t;
    while(t--){
        solver();
    }
}