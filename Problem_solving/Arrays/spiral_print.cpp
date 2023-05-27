/*
1  2  3  
4  5  6
7  8  9
*/

#include <iostream>
#include <stdio.h>
using namespace std;

void print_spiral(int arr[][3] , int row , int col){

    int startingrow = 0;
    int endingrow = row-1;
    int startingcol = 0 ;
    int endingcol = col-1;

    int total = row * col , count = 0;

    while(count<total){

        // print starting row
        for (int i = startingcol ; i<=endingcol ; i++){
            cout<<arr[startingrow][i]<<"  ";
            count++;
        }
        startingrow++;

        // print ending column
        for (int i =startingrow ; i<=endingrow ; i++){
            cout<<arr[i][endingcol]<<"  ";
            count++;
        }
        endingcol--;

        // print ending row
        for (int i = endingcol ; i>=startingcol ; i--){
            cout<<arr[endingrow][i]<<"  ";
            count++;
        }
        endingrow--;

        // print starting col
        for (int i = endingrow ; i>=startingrow ; i--){
            cout<<arr[i][startingcol]<<"  ";
            count++;
        }
        startingcol++;
    }
}

int main(){
    int arr[3][3] = {1,2,3,4,5,6,7,8,9} ;

    print_spiral(arr , 3 , 3);

    return 0;
}