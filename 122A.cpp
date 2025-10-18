#include<bits/stdc++.h>
using namespace std;

void find_digits(int n , vector<int>&digits){
    if(n == 0){
        return;
    }
    int t = n%10;
    digits.push_back(t);
    find_digits(n/10 , digits);
}

int main(){
    int n ;
    cin>>n;
    vector<int>digits;
    find_digits(n , digits);
    bool check = all_of(digits.begin() , digits.end() , [](int x){
        return x == 4 || x == 7;
    });
    if(check == 1){
        cout<<"YES";
    }
    else{
        if(n%4 == 0 || n%7 == 0 || n%47 == 0 || n%74 == 0 || n%444 == 0 || n%447 == 0 || n %474 == 0 || n%477 == 0 || n%744 == 0 || n%747 == 0 || n%774 == 0 || n%777 == 0){
            cout<<"YES";
        }
        else{
            cout<<"NO";
        }
    }
}