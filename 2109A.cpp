#include<iostream>
using namespace std;
 
void solve(int t){
    for(int i = 0 ; i < t ; i++){
        int n;
        cin >> n;
        int arr[n];
        int ones_count = 0;
        for(int j = 0 ; j < n ; j++){
            cin >> arr[j];
        }
        for(int k = 0 ; k < n; k++){
            if(arr[k] == 1){
                ones_count++;
            }
        }
        if(ones_count == n){
            cout << "YES" << endl;
            continue; 
        }
        int found_0 = 0;
        for(int l = 0 ; l < n - 1; l++){
            if(arr[l] == 0 && arr[l+1] == 0){
                found_0 = 1;
                break;
            }
        }
        if(found_0 == 1){
            cout << "YES" << endl;
        }
        else{
            cout << "NO" << endl;
        }
    }
}
 
int main(){
    int t;
    cin >> t;
    solve(t);
    return 0;
}
