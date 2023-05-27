#include <iostream>
using namespace std;

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

int main(){
    int arr[] = {59 , 98 , 123 , 585 , 9835 , -3 , 1 , 3 , 6 , 8 , 12 , 18 , 36};

    cout<<"Pivot element : "<<find_pivot(arr , 13)<<endl;
    return 0;
}
