#include<bits/stdc++.h>
using namespace std;

#include <bits/stdc++.h>
using namespace std;
void solver(){
    long long n, k;
    cin >> n >> k;
    long long mid = (n + 1) / 2;
    if (k <= mid){
        cout<<2*k - 1;
    }
    else{
        cout<<2*(k - mid);
    }
    
        
}

int main(){
    solver();
}

