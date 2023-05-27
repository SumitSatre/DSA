#include <iostream>
#include <stdio.h>
using namespace std;

void fun3(int n , int m){
    int x = m%10;
    if(n>0){
        fun3(n-1 , m/10);
        cout<<n<<" : "<<x<<endl;; 
    }
}

int main(){
    int x = 4 ;

    fun3(x , 4123);

    return 0;
}