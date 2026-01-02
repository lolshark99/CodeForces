#include<bits/stdc++.h>
using namespace std;

void solver(){
    int n;
    string s;
    cin>>n;
    cin>>s;
    
    int current_len = 0;
    int max_len = 0;
    // check for max_len for the substring with the same operator.
    for(int i  = 1 ; i < s.size() ;i++){
        if(s[i] == s[i-1]){
            current_len++;
            max_len = max(current_len , max_len);
        }
        else{
            current_len = 0;
        }
    }
    // basically we need new nums when we have the same operator and len of the longest substring will be the no of the nums needed!! 
    cout<<max_len + 2<<endl; // min cost will be 2 always as 1 element array with < , > ops is not possible.
}

int main(){
    int t;
    cin>>t;
    while(t--){
        solver();
    }
}

