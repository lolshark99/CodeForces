#include<bits/stdc++.h>
using namespace std;
int main(){
    int n ;
    cin>>n;
    vector<int>x_cor(n);
    vector<int>y_cor(n);
    vector<int>z_cor(n);
    long long final_force = 0;
    long long sum1 = 0, sum2 = 0 , sum3 = 0;
    for(int i = 0 ; i < n ;i++){
        cin>>x_cor[i]>>y_cor[i]>>z_cor[i];
        sum1+=x_cor[i];
        sum2+=y_cor[i];
        sum3+=z_cor[i];
    }
    if(sum1== 0 && sum2 == 0 && sum3 == 0){
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }
}