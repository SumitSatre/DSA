#include <iostream>
#include <stdio.h>
using namespace std;

void heapify(int *arr , int n , int pos){
    int largest = pos;
    int left = (pos*2)+1;
    int right = (pos*2)+2;

    if(left<n && arr[left] > arr[largest]){
       largest = left; 
    }

    if(right<n && arr[right] > arr[largest]){
       largest = right; 
    }

    if(largest!=pos){
        swap(arr[largest] , arr[pos]);
        heapify(arr , n , largest);
    }
}

void heap_Sort(int *arr , int n){
    for(int i = 0 ; i<(n/2) ; i++){
        heapify(arr , n , i );
    }

    for(int i = n-1 ; i>=0 ; i--){
        swap(arr[i] , arr[0]);
        heapify(arr, i , 0);
    }
}

int main(){
    int arr[] = {5,-1,3,9,-87,56,-45,89,6,8,34};

    heap_Sort(arr , 11);

    cout<<"Elements are : ";
    for(int i = 0 ; i<10 ; i++){
        cout<<arr[i]<<"  ";
    }
    cout<<endl;
    return 0;
}