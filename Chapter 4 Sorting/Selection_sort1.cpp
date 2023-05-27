#include <iostream>
#include <stdio.h>
using namespace std;

void selection_sort(int *arr , int n){
    int i , j , index = 0;

    for(i = 0 ; i<(n-1) ; i++){
        index = i;
        for(j = i+1 ; j<n ; j++){
            if(arr[index]>arr[j]){
                index = j;
            }
        }
        swap(arr[i] , arr[index]);
    }
}

int main(){
    int arr[] = {3 ,123,6, 59 ,12 ,36 ,585, 18 , -3, 1 , 9835 , -98};
    int n = 12;

    selection_sort(arr , n);

    for(int i = 0 ; i<n ; i++){
        cout<<arr[i]<<"  ";
    }
    return 0;
}