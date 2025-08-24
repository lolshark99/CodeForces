#include<iostream>
using namespace std;

void solve(int t){
    for(int i = 0 ; i < t ; i++){
        int n;
        cin >> n;
        int arr[n];
        for(int j = 0 ; j < n ; j++){
            cin >> arr[j];
        }
        int k;
        for(k = 0 ; k < n-1 ; k++){
            if(arr[k] == 0 && arr[k+1] == 0){
                cout << "Yes" << endl;
                break;               
            }
        }
        if(k == n-1){                
            cout << "No" << endl;
        }
    }
}

int main(){
    int t;
    cin>>t;
    solve(t);
}