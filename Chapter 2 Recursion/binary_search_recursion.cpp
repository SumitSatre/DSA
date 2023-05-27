// Make binary search code with the help of recursion

#include <iostream>
#include <stdio.h>
using namespace std;

int binary_search(int arr[] ,int start, int end , int key){

    // Base conditon
    if(start>end){
        return -1;
    }
    
    // processing
    int mid =  start + (end - start) / 2;

    if(arr[mid] == key){
        return mid;
    }

    if(arr[mid] > key){
        end = mid -1;
    }

    if(arr[mid] < key){
        start = mid + 1; 
    }

    // Recursive relation
    return binary_search(arr ,start , end, key);
}

int main(){
    int arr[] = {-3 , 1 , 3 , 6 , 8 , 12 , 18 , 36 , 59 , 123 , 585 , 9835};
    int key = 8;

    cout<<"The index of key "<<key<<" is "<<binary_search(arr ,0 , 11 , key);
    return 0;
}