#include <iostream>
#include <stdio.h>
using namespace std;

void swap_alternate(int arr[] , int size) {
    
    for(int i = 0 , s = 0 ; s<size/2 ; s++ , i = i+2){
        swap(arr[i] , arr[i+1]);
    }
}

int main(){
    int arr[] = {-3 , 1 , 3 , 6 , 8 , 12 , 18 , 36 , 59 , 123 , 585 , 9835 , 98};

    swap_alternate(arr , 13);

    for(int i : arr){
        cout<<i<<"  ";
    }
    return 0;
}