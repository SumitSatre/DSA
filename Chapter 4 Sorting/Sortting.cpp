#include <iostream>
#include <stdio.h>
using namespace std;

int LinearSearch(int arr[] , int n , int key){
    for(int i = 0 ; i<n ;i++){
        if(arr[i] == key){
            return i;
        }
    }
    return -1;
}

int binarySearch(int arr[] , int n , int key){
    
    int start = 0 , end = n-1 , mid =( start + end )/2;

    while(start < end){

    }

    return -1;
}

void bubble_sort(int arr[] , int n){

    for(int i = 1 ; i < n ; i++){
        for(int j = 0 ; j<(n-i) ; j++){
            if(arr[j+1] < arr[j]){
                swap(arr[j+1] , arr[j]);
            }
        }
    }
}

void insertion_sort(int arr[] , int n){

    for(int j ,i = 1 ; i < (n-1) ; i++){
        int temp = arr[i];

        for( j = i-1 ; j>=0 ; j--){
            if(temp < arr[j]){
                arr[j+1] = arr[j];
            }
            else{
                break;
            }
        }
        arr[j+1] = temp;
    }
}


void selection_sort(int arr[] , int n){

    for(int j ,i = 0 ; i<n-1 ; i++){
        int index = i ;

        for( j = i+1 ; j<n; j++){
            if(arr[index] > arr[j]){
                index = j;
            }
        }
        swap(arr[index] , arr[i]);
    }
}
int partition(int arr[] , int s , int e){
    int pivot = arr[s];
    int count = 0;

    for(int i  = s+1 ; i<=e ; i++){
        if(pivot >= arr[i]){
            count++;
        }
    }

    int pivotIndex = s+count;
    swap(arr[pivotIndex] , arr[s]);

    int i = s , j = e;

    while(i<pivotIndex && j>pivotIndex){
        while(arr[i] < pivot){
            i++;
        }

        while(arr[j] > pivot){
            j--; 
        }

        swap(arr[i] , arr[j]);
    }

    return pivotIndex;
}

void quick_sort(int arr[] ,int s , int e){
    if(s>=e){
        return;
    }

    int p = partition(arr , s , e);

    // left part
    quick_sort(arr , s , p-1);

    quick_sort(arr , p+1 , e);
}

int main(){
    int arr[] = {5,-1,3,9,87,56,-45,89,6,8,34};

    // bubble_sort(arr , 11);

    // insertion_sort(arr , 11);

    // selection_sort(arr , 11);

    // binary_search(arr , 11 , 89);

    // merge_sort(arr , 0 , 10);

    quick_sort(arr , 0 , 10);

    cout<<"Elements are : ";
    for(int i = 0 ; i<10 ; i++){
        cout<<arr[i]<<"  ";
    }
    cout<<endl;
    return 0;
}