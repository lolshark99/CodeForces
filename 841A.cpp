#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,k;
    cin>>n;
    cin>>k;
    string s;
    cin>>s;
    vector<int>frequency(26 , 0);
    // basic idea is that if a character appears more than the number of bros then most prob we will run out of unique colors!!! 
    
    for(char c : s){
        frequency[c - 'a']++;
    }
    sort(frequency.rbegin() ,frequency.rend());//sorting in reverse gives me max frequenecy first!!
    int max_freq = frequency[0];
    if(max_freq > k){
        cout<<"NO";
    }
    else{
        cout<<"YES";
    }
}