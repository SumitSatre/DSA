#include <iostream>
#include <stdio.h>
using namespace std;

int LenearSearch(int arr[] ,int size ,int key){

    static int loc = 0 , x = 0 , i = -1;
    // Recursive relation
    if(key == arr[i+1]){
        x++;
        return loc;
    }   
    i++;
    loc++;
   
    // Base Condition
    if(size==-1){
        return -1;
    }

    LenearSearch(arr ,size-1 ,key);
}

int main(){
    int arr[] = {1 ,3 ,6 ,-6 , 59 ,12 ,36 ,585 ,8 , -9 , 8 , 9835 , 98};
    int size , key , x;
    size = sizeof(arr)/sizeof(int);
    cout<<"Enter the Number to find : ";
    cin>>key;

    x = LenearSearch(arr , size , key);

    cout<<"The index of "<<key <<" is "<<x<<endl;
    return 0;
}