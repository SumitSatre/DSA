#include <iostream>
#include <stdio.h>
using namespace std;

int MissingNumber(int *array, int n) {
        int a[n+1];
        a[0] = -1;
        
        for(int i =1 ;i<=n ; i++){
            a[i] = i;
        }
        
        for(int i = 0 ; i<(n-1) ;i++){
            int x = array[i];
            a[x] = -1;
        }
        
        int y = 0;
        for(int i=0 ; i<=n ; i++){
            if(a[i] != -1){
                y = a[i];
                break;
            }
        }
        return y;
        
}

int main(){
    int arr[7] = {1,3,2,5,4,7,8};

    cout<<MissingNumber(arr , 8)<<endl;
    return 0;
}