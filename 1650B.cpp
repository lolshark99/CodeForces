#include<iostream>
#include<cmath>
using namespace std;
//function is floor(x/a) + x%a and it is to be maximsed in the range form x to a
int solve(int t){
    int l;
    int a;
    int r;      
    int ans = 0;
    int x;
    for(int i = 0 ; i < t ; i++){
        cin>>l;
        cin>>r;
        cin>>a;
        ans = r / a + r % a;                        
        x = (r / a) * a - 1;                        
        if (x >= l) ans = max(ans, x / a + x % a);  
        cout<<ans<<endl;                            
    }
    return 0;
}

int main(){
    int t;
    cin>>t;
    solve(t);
}