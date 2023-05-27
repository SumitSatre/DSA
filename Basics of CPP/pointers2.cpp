// This Program shows that the every pointer take 8 byte memory regardless the data type.

#include <iostream>
#include <stdio.h>
using namespace std;

struct Rectangle{
    int length;
    int breath;
};

int main(){
    int *p1;
    float *p2;
    double *p3;
    string *p4;
    char *p5;
    struct Rectangle *r1; 

    cout << sizeof(p1) <<endl;
    cout << sizeof(p2) <<endl;
    cout << sizeof(p3) <<endl;
    cout << sizeof(p4) <<endl;
    cout << sizeof(p5) <<endl;
    cout << sizeof(r1) <<endl;
    return 0;
}