#include <iostream>
#include <stdio.h>
using namespace std;

void merge(int arr1[] ,int size1 ,int arr2[] ,int size2 ,int arr3[]){
    
    int x = 0 , i = 0 , j = 0;

    while(i<size1 && j<size2){
        if(arr1[i] < arr2[j]){
            arr3[x] = arr1[i];
            x++;
            i++;
        }
        else{
            arr3[x] = arr2[j];
            x++;
            j++;
        }
    }

    while(i<size1){
        arr3[x] = arr1[i];
        x++;
        i++;
    }
    while(j<size2){
        arr3[x] = arr2[j];
        x++;
        j++;
    }
}

void print(int arr[] , int n){
    for(int i = 0 ; i < n ; i++){
        cout<<arr[i]<<"  ";
    }
    cout<<endl;
}


int main(){
    int arr1[] = {-3 , 1 , 3 , 6 };
    int arr2[] = {2,5,11};

    int size1 = sizeof(arr1) / sizeof(int);
    int size2 = sizeof(arr2) / sizeof(int);

    int *arr3 = new int[size1 + size2];

    merge(arr1 , size1 , arr2 , size2 , arr3);

    print(arr3 , size1 + size2);
    return 0;
}