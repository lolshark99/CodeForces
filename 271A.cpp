#include<bits/stdc++.h>
using namespace std;

void digit_finder(int x , unordered_map<int , int> &duplicate_check){
    if(x == 0){
        return ;
    }
    int digit = x%10;
    duplicate_check[digit]++;
    digit_finder(x / 10 ,duplicate_check);

}
//basic idea is that since there are only 4 unique digits in our number so the size of the hashmap must be 4!!!
int main(){
    int n;
    cin>>n;
    int x;
    for(x = n+1 ; x <= 90000 ;x++){
        unordered_map<int , int>duplicate_check;
        digit_finder(x , duplicate_check);
        if(duplicate_check.size() == 4){// the x which has 4 sized hashmap is stored and then printed
            break;
        }
    }
    cout<<x;
}