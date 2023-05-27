#include <iostream>
#include <stdio.h>
using namespace std;

int main(){
    int arr[] = {3 ,1,6, 59 ,12 ,36 ,585 ,8 , 18 , -3, 123 , 9835 , -122};
    int size = sizeof(arr) / sizeof(int) , position;
    cout<<size<<endl<<"Enter the position : ";
    cin>>position;

    int s = position+1;
    int e = size-1;

    while(s<e){
        swap(arr[s] , arr[e]);
        s++;
        e--;
    }

    for(auto i:arr){
        cout<<i<<"  ";
    }
    return 0;
}