#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,m,a;
    cin>>n>>m>>a;
    int area = n * m;
    int area2 = a * a;
    cout<<ceil((n/a)) * ceil((m / a));
}