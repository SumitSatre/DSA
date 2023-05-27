
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
    int n = 12 , i , j ;

    for(int i = 1  ; i<n ; i++){
        
        for(int j = 0 ; j<(n-i) ; j++){
            if(arr[j]>arr[j+1]){
                swap(&arr[j] , &arr[j+1]);
            }
            }
            cout<<"\nThis is pass "<<i<<endl;
            for(int k = 0 ; k<n ; k++){
            cout<<arr[k]<<"  ";
        }
        }
    
    return 0;
}