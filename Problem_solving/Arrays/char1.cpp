#include <iostream>
#include <stdio.h>
using namespace std;

int main(){
    // printing method by pointer 
    char a[15] = "Sumit satre";
    char *ptr = a;

    for(a , ptr ; *ptr!='\0' ; ptr++){
        printf("%c" , *ptr);
    }
    cout<<endl; 


    // Printing method by simple array method
    char b[15] = "Sumit satre OP";

    for( int i = 0 ; b[i]!='\0' ; i++){
        printf("%c" , b[i]);
    }
    cout<<endl; 

    // No loop
    char c[25] ;
    cin>>c;

    cout<<c<<endl;
    return 0;
}

/* In char array at the time of input from the last keyword we enter after that it to its 
next element it automatically give NULL value '\0' */