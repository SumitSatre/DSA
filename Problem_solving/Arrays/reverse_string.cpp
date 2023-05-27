#include <iostream>
#include <stdio.h>
using namespace std;

void reverse(char b[] , int size){
    int n = size / 2;

    for( int i = 0 ; i<n ; i++){
        swap(b[i] , b[size-1]);
        size--;
    }
} 

int main(){
    char b[15] = "Sumit satre OP";
    int i , size = 0;

    for( int i = 0 ; b[i]!='\0' ; i++){
        size++;
    }
    int n = size / 2;

    for( int i = 0 ; i<n ; i++){
        swap(b[i] , b[size-1]);
        size--;
    }

    for( int i = 0 ; b[i]!='\0' ; i++){
        printf("%c" , b[i]);
    }
    return 0;
}