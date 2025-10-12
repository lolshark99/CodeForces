#include<bits/stdc++.h>
using namespace std;
#define SIZE 3
int main(){
    int n;
    cin>>n;
    int answer[SIZE];
    int final = 0;
    while(n--){
        for(int i = 0 ; i < SIZE ;i++){
            cin>>answer[i];
        }
        int count = 0;
        for(int i = 0 ; i < SIZE ; i++){
            if(answer[i] == 1){
                count++;
            }
        }
        if(count >= 2){
            final++;
        }
    }
    cout<<final<<endl;
}