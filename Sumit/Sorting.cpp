#include <iostream>
using namespace std;

void bubble_sort(int *arr , int size){

    for(int i = 1 ; i<size ; i++){
        for(int j = 0 ; j<size ; j++){
            if(arr[j] > arr[j+1]){
                swap(arr[j] , arr[j+1]);
            }
        }
    }

    cout<<"Elements are : ";
    for(int i = 0 ; i<size ; i++){
        cout<<arr[i]<<"  ";
    }
    cout<<endl;
}

void insertion_sort(int *arr , int size){
    int i , j , temp;

    for(i = 1 ; i<size ; i++){
        temp = arr[i];

        for(j = i-1 ; j>=0 ; j--){
            if(arr[j] > temp){
                arr[j+1] = arr[j];
            }
            else{
                break;
            }
        }
        arr[j+1] = temp;
    }

    cout<<"Elements are : ";
    for(int i = 0 ; i<size ; i++){
        cout<<arr[i]<<"  ";
    }
    cout<<endl;
}

void selection_sort(int *arr , int size){
    int index , i , j;

    for(i = 0 ; i<size ; i++){
        index = i;

        for(j = i+1 ; j<size ; j++){
            if(arr[index] > arr[j]){
                index = j;
            }
        }
        swap(arr[index] , arr[i]);
    }

    cout<<"Elements are : ";
    for(int i = 0 ; i<size ; i++){
        cout<<arr[i]<<"  ";
    }
    cout<<endl;
}

void binary_search(int *arr , int size , int key){
    int flag = 0;
    int s = 0;
    int e = size -1;
    int m = (s+e)/2;

    while(s<=e){
        if(arr[m] == key){
            cout<<"Element present at index : "<<m<<endl;
            flag = 1;
            break;
        }
        else if(arr[m] < key){
            s = m +1;
        }
        else{
            e = s+1;
        }
        m = (s+e)/2;
    }
    if(flag == 0){
        cout<<"Element not found";
    }
}

void merge(int *arr , int s , int e){
    int m = (s+e)/2;
    int len1 = m-s+1;
    int len2 = e-m;

    int *a1 = new int[len1];
    int *a2 = new int[len2];

    // copy values 
    int k = s;
    for(int i = 0 ; i<len1 ; i++){
        a1[i] = arr[k++];
    }

    k = m+1;
    for(int i = 0 ; i<len2 ; i++){
        a2[i] = arr[k++];
    }

    int i = 0 , j = 0 ;
    k = s;

    while(i < len1 && j < len2){
        if(a1[i] < a2[j]){
            arr[k++] = a1[i++];
        }
        else{
            arr[k++] = a2[j++];
        }
    }

    while(i < len1){
        arr[k++] = a1[i++];
    }

    while(j < len2){
        arr[k++] = a2[j++];
    }

    delete [] a1 , a2;
}

void merge_sort(int *arr , int s , int e){
    if(s>=e){
        return ;
    }

    int m = (s+e)/2;

    merge_sort(arr , s , m);

    merge_sort(arr , m+1 , e);

    merge(arr , s , e);
}

int partition(int *arr , int s , int e){

    int pivot = arr[s];
    int pivotIndex = 0 , count = 0;

    for(int i = s+1 ; i<e ; i++){
        if(pivot >= arr[i]){
            count++;
        }
    }

    pivotIndex = s + count;
    swap(arr[pivotIndex] , arr[s]);

    int i = s , j = e;
    while(i<pivotIndex && j>pivotIndex){
        while(arr[i] < pivot){
            i++;
        }

        while(arr[j] > pivot){                             // imp
            j--;
        }

        swap(arr[i] , arr[j]);
    }
    return pivotIndex;
}

void quick_sort(int *arr , int s , int e){
    // base condtion
    if(s>=e){
        return;
    }

    int p = partition(arr , s ,e);

    // left wala part
    quick_sort(arr , s , p);

    quick_sort(arr , p+1, e);
}

int main(){
    int arr[] = {5,-1,3,9,87,56,-45,89,6,8,34};

    // bubble_sort(arr , 11);

    // insertion_sort(arr , 11);

    // selection_sort(arr , 11);

    // binary_search(arr , 11 , 89);

    // merge_sort(arr , 0 , 10);

    quick_sort(arr , 0 , 10);

    cout<<"Elements are : ";
    for(int i = 0 ; i<10 ; i++){
        cout<<arr[i]<<"  ";
    }
    cout<<endl;
    return 0;
}
