/* There are the three types by using we can pass the arguments to the function : 
1.  Call By Value
2.  Call By Referene
3.  Call by Address

In the 2nd and 3rd method actual paratmeters of the main is changed
but in call by value method it cannot impact on the main functions variables
*/

#include <iostream>
#include <stdio.h>
using namespace std;

void add1(int a, int b){
    cout<<"call by value method"<<endl;
    cout<<"The adition is "<<a+b<<endl;
}

// here , x is the nickname of the a if we changes one of them it will impact both of them
void add2(int &x , int &y){
    cout<<"\ncall by reference method"<<endl;
    cout<<"The adition is "<<x+y<<endl;
}

/* Here , x is pointer to the a hence x contains the address of a to change the value of a 
dereference(*) is used */
void add3(int *x , int *y){
    cout<<"\ncall by Address method"<<endl;
    cout<<"The adition is "<<(*x)+(*y)<<endl;
}

int main(){
    int a = 10 , b = 12;

    add1(a , b);
    add2(a , b);
    add3(&a , &b);
    return 0;
}