#include <iostream>
#include <stdio.h>
using namespace std;

int BinarySearch(int arr[] ,int size ,int key){
    
    int start = 0;
    int end = size -1;
    int mid = (start + end) / 2;

    while(start<=end){
        if(arr[mid] == key){
            return mid;
        }

        if(arr[mid] < key){
            start = mid + 1;
        }

        if(arr[mid] > key){
            end = mid - 1;
        }

        mid = (start + end) / 2;
    }
    return -1;
}

int main(){
    int EvenArr[] = {1,4,6,8,9,12,14,17};
    int OddArr[] = {1,3,5,6,8,9,45};
    int x , y;

    x = BinarySearch(EvenArr , 8 , 6);
    cout<<"Index of 6 is "<<x<<endl;

    y = BinarySearch(OddArr , 7 , 9);
    cout<<"Index of 9 is "<<y<<endl;
    return 0;
}

/* Some times the in the mid value two intergers are at their max point and we add it , it cannot add 
the numbers therefore instead of mid = (start + end) / 2 we can use
mid = start + (end-start)/2
They both are the same 

*/

