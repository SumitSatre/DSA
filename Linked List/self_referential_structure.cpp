#include <iostream>
#include <stdio.h>
using namespace std;

struct code
{
    int i;
    char c;
    struct code *ptr;
};

int main()
{
    struct code c1;
    c1.i = 12;
    c1.c = 'A';

    struct code c2;
    c2.i = 1;
    c2.c = 'p';

    c1.ptr = &c2;  // now c1 ptr can access all the data members of c2

    cout << c1.ptr->i << "  " << c1.ptr->c << endl;
    cout<< &c2 << endl;
    return 0;
}