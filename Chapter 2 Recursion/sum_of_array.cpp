// Check the array is sorted or not

#include <iostream>
#include <stdio.h>
using namespace std;

int Sum_of_array(int *arr , int size){
    static int sum = 0;
    // Base condition
    if(size==0){
        return sum;
    }

    // Processing
    sum = sum + arr[0];

    // Recursive relation
    return Sum_of_array(arr+1 , size-1);
}

int main(){
    int arr[] = {-3 , 2 , 3 , 6 , 8 , 12 };

    cout<<"Sum of array is : "<<Sum_of_array(arr , 6)<<endl;
    return 0;
}