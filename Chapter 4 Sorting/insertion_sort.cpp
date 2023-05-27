#include <iostream>
#include <stdio.h>
using namespace std;

void insertion_sort(int *arr , int size){
    for(int i = 1 ; i<size ; i++){
        int temp = arr[i] ;
        int j = i-1 ;

        for( ; j>=0 ; j--){
            if(arr[j]>temp){
                // shift
                arr[j+1] = arr[j];
            }

            else{
                break;
            }
        }
        arr[j+1] = temp;
    }
}

int main(){
    int arr[] = {3 ,1,6, 59 ,12 ,36 ,585 ,8 , 18 , -3, 123 , 9835 , 98};
    int n = 13;

    insertion_sort(arr , n);

    for(int i = 0 ; i<n ; i++){
        cout<<arr[i]<<"  ";
    } 
    return 0;
}
