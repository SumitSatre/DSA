#include <iostream>
#include <stdio.h>
using namespace std;

int partition(int *arr , int s , int e){
    int pivot = arr[s];
    int count = 0;

    for(int i = s+1 ; i<=e ; i++){
        if(arr[i]<=pivot){
            count++;
        }
    }

    int pivotIndex = s + count;
    swap(arr[pivotIndex] , arr[s]);

    int i = s, j = e;
    while(i<pivotIndex && j>pivotIndex){
        while(arr[i]<pivot){
            i++;
        }

        while(arr[j]>pivot){
            j--;
        }

        swap(arr[i++] , arr[j--]);
    }
    return pivotIndex;
}

void quick_sort(int *arr , int s , int e){
    // base case
    if(s>=e){
        return;
    }

    int p = partition(arr , s , e);

    // left part
    quick_sort(arr , s , p-1);

    // Right part
    quick_sort(arr , p+1 , e);
} 

int main(){
    int arr[] = {3 ,123,6, 59 ,12 ,36 ,585 ,8 , 18 , -3, 1 , 9835 , -98};
    int size = 13;

    quick_sort(arr , 0 , size-1);

    for(int i : arr){
        cout<<i<<"  "; 
    }
    return 0;
}