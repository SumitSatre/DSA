#include <iostream>
#include <stdio.h>
using namespace std;

int main(){
    int arr[] = {3 ,1,6, 59 ,12 ,36 ,585 ,8 , 18 , -3, 123 , 9835 , 98};
    int size = sizeof(arr) / sizeof(int);

    for(int i = 0 , j = size-1 ; i<(size/2) ; i++ , j--){
        swap(arr[i] , arr[j]);
    }

    for(auto i:arr){
        cout<<i<<"  ";
    }
    return 0;
}