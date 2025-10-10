#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i = 0 ; i < n ;i++){
        cin>>arr[i];
    }
    int count = 0;
    int worst = arr[0]; // initially ar[0] is the worst and the best case
    int best = arr[0];
    for(int i = 0 ; i < n ;i++){
        if(arr[i] > best){     // increment count when we see next greater rating
            count++;
            best = arr[i];
        }
        else if(arr[i] < worst){// increment count when we see next lesser rating
            count++;
            worst = arr[i];
        }
    }
    cout<<count<<endl;
}