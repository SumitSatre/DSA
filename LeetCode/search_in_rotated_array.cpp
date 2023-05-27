// Search in rotated sorted array code studio

#include <iostream>
using namespace std;

int BinarySearch(int arr[] ,int start , int end , int key){
    
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

int find_pivot(int arr[] ,int size){
    
    int start = 0;
    int end = size -1;
    int mid = (start + end) / 2;

    while(start<end){

        if(arr[mid] >= arr[0]){
            start = mid +1;
        }

        else{
            end = mid;
        }

        mid = (start + end) / 2;
    }
    return start;
}

int search_in_rotated_array(int *arr , int size , int key){
    
    int pivot = find_pivot(arr , size);

    if(arr[0] <= key){
        return BinarySearch(arr , 0 , pivot-1 , key);
    }
    else{
        return BinarySearch(arr , pivot , size-1 , key);
    }
}

int main(){
    int arr[] = {2 ,4 ,5, 1};

    cout<<"Element Position : "<<search_in_rotated_array(arr , 4 , 12)<<endl;
    return 0;
}