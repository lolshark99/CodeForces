#include<bits/stdc++.h>
using namespace std;
/* void solver(){
    int n;
    cin>>n;
    string s;
    cin>>s;
    int ans1 = 0;
    int ans2 = 0;
    int conti = 0;
    int max1 = 1;
    int max2 = 1;
    for(int i = 1 ; i < s.size() ; i++){
        if(s[i] != s[i - 1]){
            ans1++;
            conti++;
            if(ans1 > max1){
                max1 = ans1;
            }
        }
        else if(s[i] == s[i - 1]){
            break;
        }
    }
    for(int j = conti + 1; j < s.size() ;j++){
        if(s[j] == s[j - 1]){
            ans2++;
            if(ans2 > max2){
                max2 = ans2;
            }
        }
        else if(s[j] == s[j - 1]){
            break;
        }
    }
    cout<<max1 + max2<<endl;
} */
void solver(){
    int n ;
    cin>>n;
    string s;
    cin>>s;
    vector<int> prefix(n), suffix(n);
    vector<int> frequency_arr1(26, 0);
    vector<int> frequency_arr2(26, 0);
    int ans1 = 0;
    int ans2 = 0;
    for(int i = 0 ; i < n ; i++){
        if(frequency_arr1[s[i] - 'a'] == 0){
            ans1++;
        }
        frequency_arr1[s[i] - 'a']++;
        prefix[i] = ans1; 
    }
    for(int i = n - 1; i >= 0 ;i--){
        if(frequency_arr2[s[i] - 'a'] == 0){
            ans2++;
        }
        frequency_arr2[s[i] - 'a']++;
        suffix[i] = ans2;
    }
    int op = 0;
    for(int j = 0 ; j < n - 1; j++){
        op = max(op , prefix[j] + suffix[j + 1]);
    }
    cout<<op<<endl;
}

int main(){
    int t;
    cin>>t;
    while(t--){
        solver();
    }
}
