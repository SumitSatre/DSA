#include <iostream>
#include <stdio.h>
using namespace std;

int main(){
    int a=20;
    int &r = a;
    cout<<a<<endl<<r<<endl;

    r = 25;
    cout<<a<<endl<<r<<endl;

    a = 100;
    cout<<a<<endl<<r<<endl;
    return 0;
}

// Here if we change the one variable another also change automatically becaause they are same
// It is like same person with name (a) and nickname (r)
