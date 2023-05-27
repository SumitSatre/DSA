/* In this section we learned that the recursion works and how its above and below statements executes*/

#include <iostream>
#include <stdio.h>
using namespace std;

void fun1(int n){
    if(n>0){
        fun1(n-1);
        cout<<n;     // Below statement run at the returning time 
    }
}

void fun2(int n){
    if(n>0){
        cout<<n;     // Above statement run at the calling time
        fun2(n-1);
    }
}

void fun3(int n){
    if(n>0){
        cout<<n;     
        fun3(n-1);
        cout<<n; 
    }
}

int main(){
    int x = 3 ;
    fun1(x);
    cout<<endl;

    fun2(x);
    cout<<endl;

    fun3(x);
    return 0;
}