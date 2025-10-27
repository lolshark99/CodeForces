#include<bits/stdc++.h>
using namespace std;
void solver(){
    int n;
    cin>>n;
    int count = 0;
    double sum = 0;
    vector<int>marks(n);
    for(int i = 0 ; i < n ;i++){
        cin>>marks[i];
        sum+=marks[i];
    }
    sort(marks.begin() , marks.end()); // sorting the other way gave wrong answer for test case 5 , investigate!!!
    int j = 0;
    while(sum/n < 4.5 && j < n){
        if(marks[j] != 5){
            sum+=(5 - marks[j]);
            marks[j] = 5;
            count++;
        }
        j++;
    }
    cout<<count<<endl;
}


int main(){
    solver();
}
