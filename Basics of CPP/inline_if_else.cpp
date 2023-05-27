#include <iostream>
#include <stdio.h>
using namespace std;

// (condition) ? if true : else ;

int main(){
    int a = 3 , b =6;

    int c = (a>b) ? a : b;
    cout<<"The maximum number is "<<c<<endl;
    return 0;
}