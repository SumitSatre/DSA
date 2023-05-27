#include <iostream>
#include <stdio.h>
using namespace std;

void merge(int arr1[] ,int size1 ,int arr2[] ,int size2 ,int arr3[]){
    for(int i = 0; i<size1 ; i++  ){
        arr3[i] = arr1[i];
    }
    for(int i = size1 , j = 0; i < ( size1 + size2 ) ; i++ , j++ ){
        arr3[i] = arr2[j];
    }
}

void print(int arr[] , int n){
    for(int i = 0 ; i < n ; i++){
        cout<<arr[i]<<"  ";
    }
    cout<<endl;
}

void sort(int arr[] , int n , int m){
    for(int i = n ; i<(n+m) ; i++){
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
    int arr1[] = {-3 , 1 , 3 , 6 , 8 , 12 , 18 , 36 , 59 , 123 , 585 , 9835};
    int arr2[] = {2,5,11,18};

    int size1 = sizeof(arr1) / sizeof(int);
    int size2 = sizeof(arr2) / sizeof(int);

    int arr3[size1+size2] , j;

    merge(arr1 , size1 , arr2 , size2 , arr3);

    print(arr3 , size1+size2);

    sort(arr3 , size1 , size2);
    
    print(arr3 , size1+size2);
    
    return 0;
}