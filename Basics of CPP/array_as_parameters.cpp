#include <iostream>
#include <stdio.h>
#include <stdlib.h>
using namespace std;

// here * is used to return the pointer 
int a;
int * func(int n){
    a = 12;
    int *P;
    P = (int *)malloc(n*sizeof(int));
    return &a;
}
// Here the function is creating the memory for the n number of integers in the heap memory


int main(){
    int *A;
    A=func(5);
    // A[0]=1;
    // A[1]=2;
    // A[2]=3;
    // A[3]=4;
    // A[4]=5;

    // cout<<A[0]<<endl
        // <<A[1]<<endl
        // <<A[2]<<endl
        // <<A[3]<<endl
        // <<A[4];

        cout<<*A;
    return 0;
}