#include <iostream>
#include <stdio.h>
using namespace std;

int main()
{
    // implicit typecasting
    float a = 5.34;

    int x;
    x = int(a);
    cout << x << endl;
    cout << a << endl;

    // explicit typecasting
    int p = 65;
    int *ptr = &p;
    char *q = (char *)ptr;
    cout << endl
         << "p = " << p << endl
         << "ptr = " << ptr << endl
         << "q = " << q << endl;
    return 0;
}