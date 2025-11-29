#include<bits/stdc++.h>
using namespace std;

void solver(){
    int n;
    cin>>n;

    int max1 = /* ((n*(n-1)) - 1) + ((n*n) -1) + (n*(n-1)-2) + (n*(n-1)) + ((n*(n-2)) - 1); */ 5*((n*n) - n - 1);
    int max2 = /* (n*n) + (n*(n-1)) + ((n*n) - 2) + ((n*(n-1))-1); */ (4*(n*n)) - n - 4;
    
    if(n==1){
        cout<<1<<endl;
    }

    else if (n==2)
    {
        cout<<9<<endl;
    }
    

    else if(n <= 4){
        cout<<max2<<endl;
    }

    else{
        cout<<max1<<endl;
    }


}

int main(){
    int t;
    cin>>t;
    while(t--){
        solver();
    }
    
}