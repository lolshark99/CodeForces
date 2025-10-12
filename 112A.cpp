#include<bits/stdc++.h>
using namespace std;
int main(){
    string s1;
    string s2;
    cin>>s1;
    cin>>s2;
    /* int ascii_sum_1 = 0;
    int ascii_sum_2 = 0; */
    transform(s1.begin() , s1.end() , s1.begin() , ::tolower);
    transform(s2.begin() , s2.end() , s2.begin() , ::tolower);
    /* for(char c : s1){
        ascii_sum_1 += c;
    }
    for(char c : s2){
        ascii_sum_2 += c;
    }
    if(ascii_sum_1 == ascii_sum_2){
        cout<<0;
    }
    else if(ascii_sum_1 < ascii_sum_2){
        cout<<-1;
    }
    else if(ascii_sum_1 > ascii_sum_2){
        cout<<1;
    } */
   if(s1 == s2){
    cout<<0;
   }
   else if(s1 < s2){
    cout<<-1;
   }
   else{
    cout<<1;
   }
}