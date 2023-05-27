#include <iostream>
#include <stdio.h>
using namespace std;

void update(int &n){
    n++;
}

int main(){
    int a = 12;
    int &p = a; 
    int &q = p;

    cout<<"Adrress of a : "<<&a<<endl;
    cout<<"Adrress of p : "<<&p<<endl;

    a++;
    cout<<a<<endl;
    p++; // 14
    ++q; // 15

    update(a); // 16
    cout<<a<<endl;
    cout<<p<<endl;
    cout<<q<<endl;


    return 0;
}