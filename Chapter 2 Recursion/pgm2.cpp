// Factorial

#include <iostream>
#include <stdio.h>
using namespace std;

int func(int n){
    if(n>0){
        return func(n-1)*n;
    }
    return 1;
}

int main(){
    int x=func(5);
    cout<<x;

    return 0;
}