#include <iostream>
#include <stdio.h>
#include <stdlib.h>
using namespace std;

struct Rectangle{
    int length;
    int breath;
};

// here * is used to return the pointer of sturcture
struct Rectangle *func(){
    struct Rectangle *p;
    p = new Rectangle;
    // p = (struct Rectangle*)malloc(sizeof(struct Rectangle));
    p->length = 12;
    p->breath = 10;

    return p;
}
int main(){
    struct Rectangle *ptr = func();

    cout<<ptr->length<<endl
        <<ptr->breath<<endl;
    return 0;
}

/* Here first we created the function which returns the pointer of structure then we created a pointer
in the function then we created a memory to the heap for that pointer assigns the values then 
stores it into the pointer of the main class */ 