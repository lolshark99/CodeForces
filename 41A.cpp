#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;
    string t;
    cin>>s;
    cin>>t;
    int n = s.size();
    // if t swapped == s orig then our translation is right!!!
    for(int i = 0 ; i < n/2 ; i++){
        swap(s[i] , s[n - i - 1]);
    }
    if(s == t){
        cout<<"YES";
    }
    else{
        cout<<"NO";
    }
}