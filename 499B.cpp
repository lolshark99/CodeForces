#include<bits/stdc++.h>
using namespace std;
int main(){
    int n , m;
    cin>>n>>m;
    vector<string>sentence(n);
    unordered_map<string , string>mapp(m);

    for(int i = 0 ; i < m ;i++){
        string s1;
        string s2;
        cin>>s1>>s2;
        mapp[s1] = s2;
    }

    for(int j = 0 ; j < n ;j++){
        cin>>sentence[j];
    }

    for(int k = 0 ; k < n ;k++){
        string &a = sentence[k];
        string &b = mapp[a];

        if(b.size() < a.size()){
            cout<<b<<" ";
        }
        else{
            cout<<a<<" ";
        }


    }
}