#include <iostream>
#include <stdio.h>
using namespace std;

void merge(int arr1[] ,int arr2[] , int size){
    for(int i = 0; i<size ; i++  ){
        arr2[i] = arr1[i];
    }
    
}

void print(int arr[] , int n){
    for(int i = 0 ; i < n ; i++){
        cout<<arr[i]<<"  ";
    }
    cout<<endl;
}

int main(){
    int arr[7] = {4,2,6,3,-9,5,0};
    int temp[7] , n =7 , k;
    cout<<"Enter how many digits you want to rotate : ";
    cin>>k;

    merge(arr , temp , n);

    for(int i = 0 ; i<7 ; i++){
       arr[(i+k)%n] = temp[i];
       cout<< (i+k)%n <<"  ";
    }
    
    cout<<endl;

    print(arr , 7);
    return 0;
}