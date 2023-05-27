#include <stdio.h>
#include <stdlib.h>

typedef struct Rectangle{
    int length;
    int breath;
}R;

int main(){
    R r1 = {3,4};   // This is called initialization of structure
    R *ptr = &r1;
    (*ptr).length = 12;
    (*ptr).breath = 5;

    printf("%d \n %d \n" ,(*ptr).length , (*ptr).breath );

    ptr->length = 10;
    ptr->breath = 15;

    printf("%d \n %d \n" ,ptr->length , ptr->breath );

    return 0;
}