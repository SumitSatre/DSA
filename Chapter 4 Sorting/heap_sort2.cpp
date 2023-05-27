#include <iostream>
#include <stdio.h>
using namespace std;


void printArray(int arr[], int n)
{
	for (int i = 0; i < n; ++i)
		cout << arr[i] << " ";
	cout << "\n";
}

void heapify(int arr[] , int n , int i){
    int largest = i;
    int left = 2*i+1;
    int right = 2*i+2;

    if(left<n && arr[largest] < arr[left]){
        largest = left;
    }

    if(right<n && arr[largest] < arr[right]){
        largest = right;
    }

    if(largest != i){
        swap(arr[largest] , arr[i]);
        heapify(arr , n , largest);
    }
}

void heapSort(int arr[], int n){

	for (int i = n - 1; i >= 0; i--) {
		swap(arr[0], arr[i]);

		heapify(arr, i, 0);
	}
}


int main(){
	int arr[] = {3 ,123,6, 59 ,12 };
    int n = 5; 
	for(int i=n/2 -1;i>=0;i--){
	    heapify(arr,n,i);
    }

    cout << "After heapifying array is \n";
	printArray(arr, n);

	heapSort(arr, n);

	cout << "Sorted array is \n";
	printArray(arr, n);
	
return 0;
}
