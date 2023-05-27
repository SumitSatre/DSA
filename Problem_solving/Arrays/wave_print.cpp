/*
1  2  3  4
5  6  7  8  
9  10 11 12
*/

#include <iostream>
#include <stdio.h>
using namespace std;

void printWave(int arr[][4] , int row , int col){
    int sum=0;

    for (int i = 0 ; i<col ; i++){
        if(i==0 || i%2==0){
            for (int j = 0 ; j<row ; j++){
                cout<<arr[j][i]<<"  ";
            }
        }

        else{
            for (int j = row-1 ; j>=0 ; j--){
                cout<<arr[j][i]<<"  ";
            }
        }
        
    }
}

int main(){
    int arr[3][4] = {1,2,3,4,5,6,7,8,9,10,11,12} , sum=0;

    printWave(arr , 3 , 4);

    return 0;
}