#include <iostream>
#include <stdio.h>
using namespace std;

void search_in_2d_array(int arr[][3] , int row , int col , int key){

    for(int i = 0 ; i<row ; i++){
        for(int j = 0 ; j<col ; j++){
            if(key==arr[i][j]){
                cout<<"Row == "<<i<<" Column = "<<j<<endl;
            }
        }
    }
}

int main(){
    int arr[3][3] = {1,2,3,4,5,6,7,8,9} ;

    search_in_2d_array(arr , 3 , 3 , 4);
    return 0;
}