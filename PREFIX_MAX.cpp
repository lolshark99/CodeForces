#include<bits/stdc++.h>
using namespace std;
void solver(){
    int n;
    cin>>n;
    vector<int>arr(n);
    for(int i = 0 ; i < n ;i++){
        cin>>arr[i];
    }
    //int smallest = *min_element(arr.begin() , arr.end());
    int biggest = *max_element(arr.begin() , arr.end());
    cout<<biggest*n<<endl;
}

int main(){
    int t;
    cin>>t;
    while(t--){
        solver();
    }
}