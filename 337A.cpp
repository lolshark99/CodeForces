#include<bits/stdc++.h>
using namespace std;
int main(){
    int n , m;
    cin>>n>>m;
    vector<long long>puzzle(m);
    for(int i = 0 ; i < m ; i++){
        cin>>puzzle[i];
    }
    sort(puzzle.begin() , puzzle.end());
    //cout<<puzzle[0] - puzzle[1]<<endl;
    
    long long ans = LLONG_MAX;

    for(int i = 0 ; i <= m - n ; i++){
        ans = min(ans, puzzle[i + n - 1] - puzzle[i]);
    }
    cout <<ans<< endl;
}