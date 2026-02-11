#include<bits/stdc++.h>
using namespace std;
int main(){
    int n , m;
    cin>>n>>m;
    vector<long long>puzzle(m);
    for(int i = 0 ; i < n ; i++){
        cin>>puzzle[i];
    }
    sort(puzzle.rbegin() , puzzle.rend());
    cout<<puzzle[0] - puzzle[1]<<endl;
}