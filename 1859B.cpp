#include<bits/stdc++.h>
using namespace std;
/* void solver(){
    int n;
    cin>>n;
    long long sum = 0;
    int min_ans = INT_MAX;
    for(int i = 0 ; i < n ;i++){
        int m;
        cin>>m;
        vector<int>arr(m);
        for(int j = 0 ; j < m ;j++){
            cin>>arr[j];
        }
        sort(arr.begin() , arr.end());
        int second_min = arr[1];
        int first_min= arr[0];
        sum+=second_min;
        min_ans = min(min_ans,first_min);
    }
    cout<<sum - min_ans<<endl;
}
 */
#include<bits/stdc++.h>
using namespace std;

void solver(){
    int n;
    cin >> n;
    long long sum_second = 0;
    int min_first = INT_MAX;
    int min_second = INT_MAX;

    for(int i = 0; i < n; i++){
        int m;
        cin >> m;

        vector<int> arr(m);
        for(int j = 0; j < m; j++){
            cin >> arr[j];
        }
        sort(arr.begin(), arr.end());
        int first_min = arr[0];
        int second_min = arr[1];

        sum_second += second_min;
        min_first = min(min_first, first_min);
        min_second = min(min_second, second_min);
    }
    cout << sum_second + min_first - min_second << endl;
}

int main(){
    int t;
    cin>>t;
    while(t--){solver();}
}