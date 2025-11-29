 #include<iostream>
using namespace std;

void solve(){
    int n;
    int x;
    cin>>x>>n;

    if(n%2 == 0){
        cout<<0<<endl;
    }
    else{
        cout<<n<<endl;
    }
}

int main(){
    int t;
    cin>>t;
    while(t--){
        solve();
    }
}