#include <iostream>
#include <stdio.h>
using namespace std;

int main(){
    int arr[6] = {2,1,5,-6,4,3};
    int n = 6 ,j , temp , i;

    for(int i = 1 ; i<n ; i++){
        temp = arr[i];
        for(j = i-1 ; j>=0 ; j--){

            // After checking the condition this if push the element by 1
            if(temp<arr[j]){
                arr[j+1] = arr[j];
            }  

            else{
                break;
            }

        }
        cout<<"j : "<<j<<" and i : "<<i<<endl;
        /* by nested loop we get the value that from which element temp element is greater then after
         1 position of that element we put our temp element */
        arr[j+1] = temp;
    }

    for(int k = 0 ; k<n ; k++){
            cout<<arr[k]<<"  ";
        }

    return 0;
}