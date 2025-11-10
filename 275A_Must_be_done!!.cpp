#include<bits/stdc++.h>
using namespace std;

void solver(){
    int switch_pos[3][3];
    //basic idea is that if the no of switches is even thn no change else we flip it and the adjacent pos!!!
    for(int i = 0 ; i < 3 ;i++){
        for(int j = 0 ; j < 3 ;j++){
            cin>>switch_pos[i][j];
        }
    }
    int switch_pos_init[3][3];
    for(int i = 0 ; i < 3 ;i++){
        for(int j = 0 ; j < 3 ;j++){
            switch_pos_init[i][j] = 1;
        }
    }
    for(int k = 0 ; k < 3 ; k++){
        for(int l = 0 ; l < 3 ; l++){
            if(switch_pos[k][l] %2 != 0){
                if(switch_pos_init[k][l] == 1){
                    (switch_pos_init[k-1][l] = 0) && (switch_pos_init[k+1][l] = 0) && (switch_pos_init[k][l+1] = 0) && (switch_pos_init[k][l-1] = 0); 
                }
                else if(switch_pos_init[k][l] == 0){
                    (switch_pos_init[k-1][l] = 1) && (switch_pos_init[k+1][l] = 1) && (switch_pos_init[k][l+1] = 1) && (switch_pos_init[k][l-1] = 1); 
                }   
            }
        }
    }
    for(int x = 0 ; x < 3 ; x++){
        for(int y = 0 ; y < 3 ;y++){
            cout<<switch_pos_init[x][y];
        }
        cout<<endl;
    }
}

int main(){
    solver();
}