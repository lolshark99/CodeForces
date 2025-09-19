#include <iostream>
#include<cmath>
using namespace std;
 
void solve(int t){
    int t1 = 15, t2 = 20, t3 = 25; // for n = 6 , 8, 10
 
    for(int i = 0; i < t; i++){
        long long n;  
        cin >> n;
 
        if(n <= 6){
            cout << t1 << endl;
        }
        else if(n <= 8){
            cout << t2 << endl;
        }
        else if(n <= 10){
            cout << t3 << endl;
        }
        else {   
            long long freq = floor(n / 10);
            long long rem  = floor(n % 10);
            long long time = freq * t3;   
 
            if(rem == 0){
                cout << time << endl;
            }
            else if(rem <= 6){
               cout << time + t1<<endl;   
            }
            else if(rem <= 8){
                cout << time + t2 << endl;
            }
            else {
                cout << time + t3 << endl;
            }
        }
    }
}
 

int main(){
    int t;
    cin >> t;
    solve(t);
    return 0;
}