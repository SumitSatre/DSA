#include <iostream>
#include <stdio.h>
using namespace std;

void copy_array(int arr[][3] , int a[][3] , int row , int col){

    for(int i = 0 ; i<row ; i++){
        for(int j = 0 ; j<col ; j++){
            a[i][j] = arr[i][j];
        }
    }
}

void rotate_array(int arr[][3] , int a[][3] , int row , int col){
    
    int startingrow = 0;
    int endingrow = row-1;
    int startingcol = 0 ;
    int endingcol = col-1;

    int total = row * col , count = 0;

    while(count<total){
        
        for(int i = startingrow , k = row-1  , j = 0 ; k>=0 || j<col ;  k-- , j++){
            arr[i][j] = a[k][i];
            count++;
        }
        startingrow++;

        for(int i = endingcol , k = startingrow , j = startingrow -1; k<=endingrow ; k++){
            arr[k][i] = a[j][k];
            count++;
        }
        endingcol--;

        for(int i = endingrow , j = startingrow  ,  k = startingrow  ; endingrow>=k ; k++,j--){
            arr[i][j] = a[k][i];
            count++;
        }
        endingrow--;

        for(int i = endingrow , j = startingcol  ,  k = endingrow ; k>=startingrow ; k-- , i--){
            arr[i][j] = a[k][i];
            count++;
        }
        startingcol++;
    }

    }


void print_2d_array(int arr[][3] , int row , int col){

    for(int i = 0 ; i<row ; i++){
        for(int j = 0 ; j<col ; j++){
            cout<<arr[i][j]<<"  ";
        }
    }
}
int main(){
    int arr[3][3] = {1,2,3,4,5,6,7,8,9} ;
    int a[3][3];

    copy_array(arr , a , 3 , 3);

    rotate_array(arr , a , 3 , 3);

    print_2d_array(arr , 3 , 3);

    return 0;
}

