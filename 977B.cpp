#include<bits/stdc++.h>
using namespace std;

void solver(){
    int n;
    string s;
    cin>>n;
    cin>>s;
    string best = "";
    int count = 0;
    for(int i = 0 ; i < s.size() ;i++){
        string s1 = s.substr(i , 2);
        size_t position = s.find(s1);
        int count1 = 0;
        while (position != string::npos)
        {
            count++;
            position = s.find(s1 , position+1);
            if(count1 > count){
                best = s1;
            }
        }
    }
    cout<<best;
}

int main(){
    solver();
}