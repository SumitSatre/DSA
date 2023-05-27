#include <iostream>
#include <stdio.h>
using namespace std;

int main(){
    int row , col;

    cout<<"Enter the row : "; 
    cin>>row;
    cout<<"Enter the col : "; 
    cin>>col;

    // creating array of pointer 
    int **arr = new int*[row];

    // in each row creating col no. of space
    for(int i = 0 ; i< row ; i++){
        arr[i] = new int[col];
    }

    for(int i = 0 ; i< row ; i++){ 
        for(int j = 0 ; j<col ; j++){
            cin>>arr[i][j];
        }
    }

    for(int i = 0 ; i< row ; i++){
        for(int j = 0 ; j<col ; j++){
            cout<<arr[i][j]<<"  ";
        }
        cout<<endl;
    }

    // releasing memory
    for(int i = 0 ; i< row ; i++){
        delete [] arr[i];
    }

    delete [] arr;
    return 0;
}