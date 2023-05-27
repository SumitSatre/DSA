

#include <iostream>
#include <stdio.h>
using namespace std;

int main(){
    int p = 65;
    int *ptr = &p;  
    int *q = ptr;

    cout << "&p == " << &p << endl;
    cout << "ptr == " << ptr << endl;
    cout << "q == " << q << endl
         << endl;

    cout << "*(&p) == " << *(&p) << endl;
    cout << "*ptr == " << *ptr << endl;
    cout << "*q == " << *q << endl;

    ++(*q);

    cout<<endl<<"After '++(*q)' : "<<endl;
    cout << "*(&p) == " << *(&p) << endl;
    cout << "*ptr == " << *ptr << endl;
    cout << "*q == " << *q << endl;
    return 0;
}