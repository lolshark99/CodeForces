#include <bits/stdc++.h>
using namespace std;
 
#ifndef ONLINE_JUDGE
#define debug(x) cerr << #x << ": "; _print(x); cerr << '\n';
#define dline(x) _print(x); cerr << '\n';
#else
#define debug(x)
#define dline(x)
#endif 
 
typedef long long ll;
typedef unsigned long long ull;
typedef long double lld;
typedef vector<int> vi;
typedef vector<long long> vll;
// _print for debugging basic data types
template<class T> void _print(T v){cerr << fixed << v;}
// _print for debugging other data structures: vector, map
template<class T> void _print(vector<vector<T>> v){cerr << '\n'; for(auto row : v){cerr << "[ "; for(auto col : row){cerr << col << ' ';} cerr << "]"; cerr << '\n';} }
template<class T> void _print(vector<T> v){ cerr << "[ "; for(auto it : v){cerr << it << ' ';} cerr << "]";}
template<class T> void _print(set<T> v){ cerr << "[ "; for(auto it : v){cerr << it << ' ';} cerr << "]";}
template<class T> void _print(unordered_set<T> v){ cerr << "[ "; for(auto it : v){cerr << it << ' ';} cerr << "]";}
template<class T1, class T2> void _print(map<T1, T2> m){ for(auto it : m) cerr << "\n[ " << it.first << " : " << it.second << " ]";}
template<class T1, class T2> void _print(pair<T1, T2> p){ cerr << "[ " << p.first << " , " << p.second << " ]";}
template<class T1, class T2> void _print(unordered_map<T1, T2> um){ for(auto it : um) cerr << "\n[ " << it.first << " : " << it.second << " ]";}
 
 
void solver(){
    ll n;
    cin>>n;
    ll ans1 , ans2;
    ans1 = 1;
    ans2 = n - 1;

    ll best = LLONG_MAX;
    for(ll i = 1 ; i*i <= n ;i++){
        if(n%i == 0){
            ll a= i;
            ll b = n - a;
            ll g = __gcd(a , b);
            ll l = (a * b)/g;
            if(l < best){
                best = l;
                ans1 = a;
                ans2 = b;
            }
            ll d = n/i;
            if(d != i && d != n){
                a = d;
                b = n - a;
                g = __gcd(a , b);
                l = (a / g) * b;
                if(l < best){
                    best = l;
                    ans1 = a;
                    ans2 = b;
                }
            }
        }
    }
    //first try below
    /*if(n == 1){
        ans1 = 1;
        ans2 = 1;
        cout<<ans1<<" "<<ans2<<endl;
    }
    else{
        int LCM = INT_MAX;
        for(temp1 = 1 ; temp1 <= n/2 ;temp1++){
            temp2 = n - temp1;
            int g = __gcd(temp1 , temp2);
            int l = (temp1*temp2)/g;
            if(l < LCM){
                LCM = min(LCM , l);
                ans1 = temp1;
                ans2 = temp2;
            }
        }
    }*/
    cout<<ans1<<" "<<ans2<<endl;
}
 
int main() {
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#ifndef ONLINE_JUDGE
    freopen("error.txt", "w", stderr);
#endif
   int t;
   cin>>t;
   while(t--){
    solver();
   }
}