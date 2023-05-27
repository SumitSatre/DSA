#include <iostream>
using namespace std;

void Bubble_sort(int *arr , int size){
	for(int i = 1 ; i<size ; i++){
		for(int j =0 ; j<(size-i) ; j++){
			if(arr[j] > arr[j+1]){
				swap(arr[j] , arr[j+1]);	
			}
		}	
	}
	
	cout<<"Elements are :  ";
	for(int i = 0 ; i<size ; i++){
	cout<<arr[i]<<"  ";
	}
	cout<<endl;
}

void Selection_sort(int *arr , int size){
	int index = 0 ,i , j;
	
	for(i = 0 ; i<(size-1) ; i++){         // (size-1)
		index = i; 
		for(j =i+1 ; j<size ; j++){
			if(arr[index] > arr[j]){
				index = j;
			}
		}	
		swap(arr[index] , arr[i]);   // arr[i]
	}
	
	cout<<"Elements are :  ";
	for(int i = 0 ; i<size ; i++){
	cout<<arr[i]<<"  ";
	}
	cout<<endl;
}

void Insertion_sort(int *arr , int size){
	int temp = 0,i , j;
	
	for(i = 1 ; i<size ; i++){
		temp = arr[i];
		for(j =i-1 ; j>=0; j--){
			if(temp < arr[j]){
				arr[j+1] = arr[j];
			}
            else{                              // else {break;}
                break;
            }
		}
		arr[j+1] = temp;
	}
	
	cout<<"Elements are :  ";
	for(int i = 0 ; i<size ; i++){
	cout<<arr[i]<<"  ";
	}
	cout<<endl;
}

int main(){
	int arr[] = {4635,4,62,6,7,-1,5,72,57,41,52,-172,463287};
	int size = 14;
	Bubble_sort(arr , size);
	Selection_sort(arr , size);
	Insertion_sort(arr , size);
return 0;
}