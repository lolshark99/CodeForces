#include<bits/stdc++.h>
using namespace std;
void solver(){
    int n;
    cin>>n;
    /*  if(n % 2 == 0 || n % 3 == 0){
        cout<<0<<endl;
    }
    else if(n < 3){
        cout<<n<<endl;
    }
    else{
        int mod1 = n % 3;
        int mod2 = n % 2;
        cout<<abs(mod1 - mod2)<<endl;
    } */
   if(n <= 3){
    cout<<n<<endl;
   }
   else if(n % 2 == 0){
    cout<<0<<endl;
   }
   else if(n % 2 != 0){
    cout<<1<<endl;
   }
}

int main(){
    int t;
    cin>>t;
    while(t--){
        solver();
    }
}