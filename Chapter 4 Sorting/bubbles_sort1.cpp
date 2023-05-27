#include <iostream>
#include <stdio.h>
using namespace std;

void bubble_sort(int *arr ,int n){
    
    for(int i = 1  ; i<n ; i++){
        
        for(int j = 0 ; j<(n-i) ; j++){
            
            if(arr[j] > arr[j+1]){
                swap(arr[j] , arr[j+1]);
            }
        }
    }
}

int main(){
    int arr[] = {3 ,123,6, 59 ,12 ,36 ,585 ,8 , 18 , -3, 1 , 9835 , 98};
    int size = 13; 

    bubble_sort(arr , size);

    for(int i : arr){
        cout<<i<<" , ";
    }

    return 0;
}
