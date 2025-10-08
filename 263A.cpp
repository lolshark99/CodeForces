#include<bits/stdc++.h>
using namespace std;
#define SIZE 5
int main(){
    int matrix[SIZE][SIZE];
    int times;
    for(int i = 0 ; i < SIZE ; i++){
        for(int j = 0 ; j < SIZE ;j++){
            cin>>matrix[i][j];
        }
    }
    for(int i = 0 ; i < SIZE ; i++){
        for(int j = 0 ; j < SIZE ;j++){
            if(matrix[i][j] == 1){
                times = abs((2 - i)) + abs((2 - j));
            }
        }
    }
    cout<<times<<endl;
}
