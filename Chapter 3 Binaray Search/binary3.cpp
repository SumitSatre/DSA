// How many times the number occur in the array

#include <iostream>
#include <stdio.h>
using namespace std;

int LeftOcc(int arr[] ,int size ,int key){
    
    int start = 0;
    int end = size -1;
    int mid = (start + end) / 2;
    int ans = -1;

    while(start<=end){
        if(arr[mid] == key){
            ans = mid;
            end = mid -1;
        }

        if(arr[mid] < key){
            start = mid + 1;
        }

        if(arr[mid] > key){
            end = mid - 1;
        }

        mid = (start + end) / 2;
    }
    return ans;
}

int RightOcc(int arr[] ,int size ,int key){
    
    int start = 0;
    int end = size -1;
    int mid = (start + end) / 2;
    int ans = -1;

    while(start<=end){
        if(arr[mid] == key){
            ans = mid;
            start = mid + 1;
        }

        if(arr[mid] < key){
            start = mid + 1;
        }

        if(arr[mid] > key){
            end = mid - 1;
        }

        mid = (start + end) / 2;
    }

    return ans;
}

int main(){
    int EvenArr[] = {1,4,6,8,9,12,12,14,17};
    int OddArr[] = {1,3,3,3,3++++++++++++++++++++,3,3,5,6,8,9,45};
    int x , y;

    x = LeftOcc(EvenArr , 9 , 12);
    y = RightOcc(EvenArr , 9 , 12);

    cout<<"The total occurrence of 12 is "<<(y-x)+1<<endl;
    

    x = LeftOcc(OddArr , 12 , 3);
    y = RightOcc(OddArr , 12 , 3);

    cout<<"The total occurrence of 3 is "<<(y-x)+1<<endl;

    return 0;
}