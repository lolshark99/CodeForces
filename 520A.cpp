#include<bits/stdc++.h>
using namespace std;
int main(){
    unordered_map<char , int>map;
    int n;
    cin>>n;
    char sentence[n];
    for(int i = 0 ; i < n ;i++){
        cin>>sentence[i];
    }
    for(int i = 0 ; i < n ;i++){
        sentence[i] = tolower(sentence[i]);
    }
    for(char c : sentence){
        map[c]++;
    }
    if(map.size() == 26){
        cout<<"YES";
    }
    else{
        cout<<"NO";
    }
}
