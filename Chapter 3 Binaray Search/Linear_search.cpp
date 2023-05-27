#include <iostream>
#include <stdio.h>
using namespace std;

void LenearSearch(int arr[] ,int size ,int key){
    int loc = 0 , x = 0;

    for(int i = 0 ; i<size ; i++){
        if(key == arr[i]){
            cout<<"The element is at "<<loc <<" position"<<endl;
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
    int arr[] = {1 ,3 ,6 ,-6 , 59 ,12 ,36 ,585 ,8 , -9 , 8 , 9835 , 98};
    int size , key;
    size = sizeof(arr)/sizeof(int);
    cout<<"Enter the key to find : ";
    cin>>key;

    LenearSearch(arr , size , key);
    return 0;
}