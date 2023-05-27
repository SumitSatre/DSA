#include <iostream>
#include <stdio.h>
using namespace std;

int binary_search_in_2d(int arr[][3] , int row , int col , int key){

    int start = 0 , element;
    int end = row*col -1;
    int mid = start + (end - start) / 2;

    while(start<=end){
        
        // (mid/col) gives the row and (mid%col) gives the column
        element = arr[mid/col][mid%col];

        if(element == key){
            return mid;
        }

        if(element < key){
            start = mid + 1;
        }

        if(element > key){
            end = mid - 1;
        }

        mid = (start + end) / 2;
    }
    return -1;
}

int main(){
    int arr[3][3] = {1,4,6,8,9,12,14,17,20} ;

    int x = binary_search_in_2d(arr , 3 , 3 , 17);
    int col = 3;
    if(x!=-1){
        int r = x / col , c = x % col;
        cout<<"Row = " << r << " Column = " << c << endl;
    }

    else{
        cout<<"Not Fuound"<<endl;
    }
    return 0;
}