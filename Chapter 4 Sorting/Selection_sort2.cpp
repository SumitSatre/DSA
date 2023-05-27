// This is selection sort structure

#include <iostream>
#include <stdio.h>
using namespace std;

void swap(int *x , int *y){
    int k;
    k = *x;
    *x = *y;
    *y = k;
}

int main(){
    int arr[] = {3 ,123,6, 59 ,12 ,36 ,585 ,8 , 18 , -3, 1 , 9835 , 98};
    int n = 12 , i , j , index = 0;

    for(int i = 0 ; i<(n-1) ; i++){
        int index = i;
        for(int j = i+1 ; j<n ; j++){
            if(arr[index]>arr[j]){
                index = j;
            }
        }
        swap(&arr[i] , &arr[index]);

        cout<<"\nThis is pass "<<i+1<<endl;
        for(int k = 0 ; k<n ; k++){
        cout<<arr[k]<<"  ";
        }
    }

    return 0;
}