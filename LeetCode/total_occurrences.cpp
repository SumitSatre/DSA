// How many times a number is occurring in the array


#include <iostream>
#include <stdio.h>
using namespace std;

int first_pos(int *arr , int n , int element){

    int x = -1;
    int s = 0 , e= n-1 , m = s + (e-s) /2;

    while(s<=e){

        if(arr[m] == element){
            e = m -1;
            x = m;
        }

        else if(arr[m] < element){
            s = m+1;
        }
        else{
            e = m-1;
        }

        m = s + (e-s) /2;
    }
    return x;
}

int last_pos(int *arr , int n , int element){

    int x = -1;
    int s = 0 , e= n-1 , m = s + (e-s) /2;

    while(s<=e){

        if(arr[m] == element){
            s = m+1;
            x = m;
        }

        else if(arr[m] < element){
            s = m+1;
        }
        else{
            e = m-1;
        }

        m = s + (e-s) /2;
    }
    return x;
}

int main(){
    int arr[] = {-3 , 2 , 2 , 2 , 8 , 12 , 18 , 36 , 59 , 98 , 98 , 585 , 9835};

    int x = first_pos(arr , 13 , 98);
    int y = last_pos(arr , 13 , 98);

    cout<<"Total Occurrence : "<< (y-x+1) <<endl;
    return 0;
}