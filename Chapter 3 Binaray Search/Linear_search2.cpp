/* Improvements in the Linear Search :
        In first if serached for the any element it is high posiibility that we can again search for 
    that element (Reduce time Complexity)

    There are two mwthods for the improvement :
    1] Transposition: 
        In this we swap it with its back element 
        // swap(arr[i-1] , arr[i]); 

    2] Move to front :
        In this we swap that element with first element
        // swap(arr[0] , arr[i]);
*/

// Here we performed 2] Move to front

void swap(int &a ,int &b);

#include <iostream>
#include <stdio.h>
using namespace std;

void LenearSearch(int arr[] ,int size ,int key){
    int loc = 0 , x = 0;

    for(int i = 0 ; i<size ; i++){
        if(key == arr[i]){
            cout<<"The element is at "<<loc <<" position"<<endl;
            swap(arr[0] , arr[i]);
            x++;
        }

        if(x==1){
            break;
        }
        loc++;
    }
    if(x!=1){
            cout<<"The entered key is not found in the array "<<endl;
        }
}

int main(){
    int arr[] = {1 ,3 ,6 ,-6 , 59 ,12 ,36 ,585 ,8 , -9 , 18 , 9835 , 98};
    int size , key;
    size = sizeof(arr)/sizeof(int);
    cout<<"Enter the number to find : ";
    cin>>key;

    LenearSearch(arr , size , key);
    LenearSearch(arr , size , key);
    return 0;
}

void swap(int &a ,int &b){
    int k = a;
    a = b;
    b = k;
}