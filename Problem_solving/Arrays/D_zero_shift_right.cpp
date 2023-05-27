#include <iostream>
#include <stdio.h>
using namespace std;

void print(int arr[] , int n){
    for(int i = 0 ; i < n ; i++){
        cout<<arr[i]<<"  ";
    }
    cout<<endl;
}

int main(){
    int arr[7] = {0,2,6,3,0,5,0};
    int n = 0;

    for(int  i = 0 ; i<7 ; i++){
        if(arr[i]!=0){
            swap(arr[i] , arr[n]);
            n++;
        }
    }

    print(arr , 7);

    return 0;
}