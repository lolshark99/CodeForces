#include<bits/stdc++.h>
using namespace std;
void solver(){
    string s;
    cin>>s;
    int count1 = 0;
    int count0 = 0;
    for(char c : s){
        if(c  == '0'){
            count0++;
        }
        else{
            count1++;
        }
    }
    int n = s.size();
    int excess = 0;
    for(int i = 0 ; i , n ;i++){
        if(s[i] == '0' && count1 > 0){
            excess++;
            count1--;
        }
        else if(s[i] == '1' && count0 > 0){
            excess++;
            count0--;
        }
        else{
            break;
        }
    }
    cout<<n - excess<<endl;
}
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin>>t;
    while(t--){
        solver();
    }
}