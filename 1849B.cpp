#include<bits/stdc++.h>
using namespace std;

void solver(){
    int n , k;
    cin >> n >> k;
    vector<pair<int , int>> index_map(n);
    vector<int> health(n);
    for(int i = 0 ; i < n ; i++){
        cin >> health[i];
        health[i] %= k;
        if(health[i] == 0) health[i] = k;   
        index_map[i].first = health[i];
        index_map[i].second = i;
    }
    sort(index_map.begin(), index_map.end(), [](pair<int,int> a, pair<int,int> b){
        if(a.first != b.first) return a.first > b.first; 
        return a.second < b.second;                     
    });
    for(auto p : index_map){
        cout << p.second + 1 << " ";
    }
    cout << endl;
}

int main(){
    int t;
    cin >> t;
    while(t--){
        solver();
    }
}
