#include <iostream>
#include <stdio.h>
using namespace std;


int main(){
    int arr[] = {3 ,123,6, 59 ,12 ,36 ,585 ,8 , 18 , -3, 1 , 9835 , 98};
    int n = 13 , i , j ;

    for(i = 1 ; i<n ; i++){
        int temp = arr[i];

        for(j = i-1 ; j>=0 ; j--){
            if(temp < arr[j]){
                arr[j+1] = arr[j];
            }
            else{
                break;
            }
        }
        arr[j+1] = temp;
    }

    for(int i : arr){
        cout<<i<<"  ";
    }
    return 0;
}