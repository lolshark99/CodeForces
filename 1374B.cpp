#include<bits/stdc++.h>
using namespace std;

/* int solver(long long n){
    if(n == 1){
        return 0;
    }
    else if(n % 6 == 0){
        return 1 + solver(n/6);
    }
    else if(n%3 == 0){
        return 1 + solver(n*2);
    }
    else{
        return -1;
    }
}

int main(){
    int t;
    cin>>t;
    while(t--){
        long long  n;
        cin>>n;
        long long steps = solver(n);
        cout<<steps<<endl;
    }
} */

int solver(){
    int n;
    cin>>n;
    int steps = 0;
    while(n != 1){
        if(n % 6 == 0){
            n = n / 6;
            steps++;
        }
        else if(n%3 == 0){
            n = n * 2;
            steps++;
        }
        else{
            return -1;
        }
    }
    return steps;
}

int main(){
    int t;
    cin>>t;
    while(t--){
        cout<<solver()<<endl;
    }
}