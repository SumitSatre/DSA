#include <iostream>
#include <stdio.h>
using namespace std;

void find_unique(int *arr , int n){
    int result = 0;

    for(int i = 0 ; i<n ; i = i+2){

        result = arr[i]^arr[i+1]^result;
        
    }
    cout<<"Unique element : "<<result<<endl;
}

int main(){
    int arr[] = {2 ,3 ,4 ,5 ,5,4 ,2};

    find_unique(arr , 7);
    return 0;
}