#include <iostream>
#include <stdio.h>
#include <stdlib.h>
using namespace std;

/* To generate the memory in the heap we want to include  (#include <stdlib.h>) for the c language */
int main(){
    int *p;

    p = (int *) malloc(5*sizeof(int));   // This syntax for c language to create memory in heap
    // p  = new int[5];           // This syntax for c++ language to create memory in heap
    p[0] = 34;
    cout<<p<<endl;
    p++;
    cout<<p<<endl;

    int A[5] = {2,4,5,7,9};
    int *ptr;
    ptr = A;    // Here A = &A[0]
    for(int i = 0 ; i< 5 ; i++ ){
        cout<<ptr[i]<<endl;        // It is same as ptr[i] == A[i]
    }

    // If we created a memory in the heap it is a necessary to deallocate the memory
    delete [] p;   // It is for cpp
    // free(p);           // This is for the c language

    return 0;
}