#include <iostream>
#include <stdio.h>
using namespace std;

void printSumRowWise(int arr[][4] , int row , int col){
    int sum=0;

    for (int i = 0 ; i<row ; i++){
        for (int j = 0 ; j<col ; j++){
            sum = arr[i][j] + sum;
        }
        cout<<"sum of "<<i+1<<" row is "<<sum<<endl;
        sum = 0;
    }
}

void printSumColumnWise(int arr[][4] , int row , int col){
    int sum=0;

    for (int i = 0 ; i<col ; i++){
        for (int j = 0 ; j<row ; j++){
            sum = arr[j][i] + sum;
        }
        cout<<"sum of "<<i+1<<" col is "<<sum<<endl;
        sum = 0;
    }
}

void LargestRowSize(int arr[][4] , int row , int col){
    int sum=0 , max = INT_MIN , index;

    for (int i = 0 ; i<row ; i++){
        for (int j = 0 ; j<col ; j++){
            sum = arr[i][j] + sum;
        }
        if(sum>max){
            max = sum;
            index = i+1;
        }
        sum = 0;
    }

    cout<<"Maximum row "<<index<<" sum is "<<max<<endl;;
}

int main(){
    int arr[3][4] = {1,2,3,4,5,6,7,8,9,10,11,12} , sum=0;

    printSumRowWise(arr , 3 , 4);
    printSumColumnWise(arr , 3 , 4);
    LargestRowSize(arr , 3 , 4);

    return 0;
}