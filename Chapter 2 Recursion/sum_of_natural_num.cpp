#include <iostream>
#include <stdio.h>
using namespace std;

int fun(int n){
    if(n>0){
        return fun(n-1) +n;
    }
    else{
        return 0;
    }
}

int main(){
    cout<<fun(10);
    return 0;
}