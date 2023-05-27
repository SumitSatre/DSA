#include <iostream>
#include <stdio.h>
using namespace std;

void fun2(int n){
    if(n>0){
        cout<<n;     
        fun2(n-1);
        fun2(n-1);
    }
}

int main(){
    fun2(3);
    return 0;
}