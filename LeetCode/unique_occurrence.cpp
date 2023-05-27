#include <iostream>
#include <stdio.h>
using namespace std;

bool uniqueOccurrences(int *arr , int n) {

    int a[1000] , count = 0 , i , j , x = 0 , flag;

    for(i = 0 ; i<n ; i++){
        count = 1;
        if(arr[i] != -1){
            for(j = i+1; j<n ; j++){
                if(arr[i] == arr[j]){
                    count++;
                    arr[j] = -1;
                }
            }

            a[x] = count;
            x++;
        }
    } 

    for(i = 0 ; i<x ; i++){
        flag = 0;
        for(j = i+1 ; j<x ; j++){
            if(a[i] == a[j]){
                flag = 1;
                break;
            }
        }
        
        if(flag == 1){
            return false;
        }
    }

    return true;
    }


int main(){
    int arr[] = {2 ,4 ,4 ,5,4 ,2};

    bool x = uniqueOccurrences(arr , 6);

    if(x){
        cout<<"unique occurrence";
    }
    else{
        cout<<"not unique occurrence";
    }
    return 0;
}