// Peak index in mountain array

#include <iostream>
#include <stdio.h>
using namespace std;

int peak_index_in_mountain_array(int *arr ,int n){
    int s = 0 , e = n-1 , mid = s + (e-s)/2;

    while(s<e){
        if(arr[mid] < arr[mid+1]){
            s = mid +1;
        }
        else{
            e = mid;
        }
        mid = s + (e-s)/2;
    }

    return s;
}

int main(){
    int arr[] = {-3 , 1 , 3 , 6 , 8 , 12 , 18 , 36 , 59 , 98 , 9835, 98, 23};
    int size = 13; 

    cout<<"Peak Element : "<<peak_index_in_mountain_array(arr , size)<<endl;
    return 0;
}