// Recursion for the static and the globle variables are same both executes only ones 

#include <iostream>
#include <stdio.h>
using namespace std;

int func(int n){
    static int y=0;
    if(n>0){
        y++;
        return func(n-1)+y;
    }
    return 0;
}

int main(){
    int x=func(5);
    cout<<x;

    return 0;
}

/* Note : The variable written after the recursive function can get the value after the all 
execution of the program */  