#include<bits/stdc++.h>
using namespace std;
int main(){
    string s1 , s2;
    cin>>s1;
    cin>>s2;
    unordered_map<char , int>checker1;
    unordered_map<char , int>checker2;
    unordered_map<char , int>checker11;
    unordered_map<char , int>checker12;
    unordered_map<char , int>checker21;
    unordered_map<char , int>checker22;
    int n = checker1.size();
    int divided = n / 2;
    for(auto &c : s1){
        checker1[c]++;
    }
    for(auto &c : s2){
        checker2[c]++;
    }
    //Now we must divide the 2 hashmaps into 4 hashmaps!!
    int n1 = (int)checker1.size();
    int half1 = n1 / 2;              
    int count = 0;
    for (auto &p : checker1) {
        if (count < half1) checker11[p.first] = p.second;
        else checker12[p.first] = p.second;
        ++count;
    }
    int n2 = (int)checker2.size();
    int half2 = n2 / 2;
    int count = 0;
    for(auto &p : checker2){
        if(count < half2){
            checker21[p.first] = p.second;
        }
        else{
            checker22[p.first] = p.second;
            count++;
        }
    }
}

if((checker11 == checker21 && checker12 == checker22) || (checker11 == checker22 && checker12 == checker21)){
    cout<<"YES";
}
