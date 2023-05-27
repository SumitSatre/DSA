// Check the array is sorted or not

#include <iostream>
#include <stdio.h>
using namespace std;

bool isSorted(int *arr , int size){
    if(size==0 || size==1){
        return true;
    }

    if(arr[0] > arr[1]){
        return false;
    }

    return isSorted(arr+1 , size-1);
}

int main(){
    int arr[] = {-3 , 2 , 3 , 6 , 8 , 12 , 18 , 36 , 59 , 123 , 585 , 9835};

    if(isSorted(arr , 12) == 1){
        cout<<"Array is sorted "<<endl;
    }
    else{
        cout<<"Array is not sorted "<<endl;
    }
    return 0;
}