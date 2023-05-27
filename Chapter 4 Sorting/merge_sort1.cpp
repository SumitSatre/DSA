#include <iostream>
#include <stdio.h>
using namespace std;

void merge(int *arr ,int s ,int e){

    int mid = (s+e)/2;
    int length1 = mid-s+1;
    int length2 = e-mid;

    int *a1 = new int[length1];
    int *a2 = new int[length2];

    // copy values
    int k = s;
    for(int i = 0 ; i<length1 ; i++){
        a1[i] = arr[k++];
    }

    k = mid+1;
    for(int i = 0 ; i<length2 ; i++){
        a2[i] = arr[k++];
    }

    // merge 2 sorted arrays
    int i = 0 , j = 0 ;
    k = s ;
    while(i<length1 && j<length2){
        if(a1[i]<a2[j]){
            arr[k++] = a1[i++];
        }
        else{
            arr[k++] = a2[j++];
        }
    }

    while(i<length1){
        arr[k++] = a1[i++];
    }

    while(j<length2){
        arr[k++] = a2[j++];
    }

    delete [] a1 , a2;
}

void merge_sort(int *arr , int s , int e){
    // base case
    if(s>=e){
        return;
    }

    int mid = (s+e)/2;

    // left side
    merge_sort(arr , s , mid);

    // right side
    merge_sort(arr , mid+1 , e);

    merge(arr , s , e);
} 

int main(){
    int arr[] = {3 ,123,6, 59 ,12 ,36 ,585 ,8 , 18 , -3, 1 , 9835 , -98};

    merge_sort(arr , 0 , 12);

    for(int i : arr){
        cout<<i<<"  "; 
    }
    return 0;
}