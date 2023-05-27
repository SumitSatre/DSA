#include <iostream>
#include <stdio.h>
using namespace std;

int main(){
    int arr[] = {12,14,34,49};
    int i = 2;

    // i[arr] == arr[i] == *(arr+i) == *(i+arr)
    cout<<"i[arr] : "<< i[arr] <<endl;
    cout<<"arr[i] : "<< arr[i] <<endl;
    cout<<"*(arr+i) : "<< *(arr+i) <<endl;
    cout<<"*(i+arr) : "<< *(i+arr) <<endl;

    cout<<"arr : "<< arr <<endl;
    cout<<"&arr : "<< &arr <<endl;
    

    int a[] = {12,14,34,49};
    char s[] = "Sumit";

    cout<<"a : "<<a<<endl; // It prints the address of first element
    cout<<"s : "<<s<<endl; // It prints entire character array

    // cout works differently for char array and int array

    char *p = &s[0];

    cout<<"p : "<< p <<endl;  // address chya jagi purn char array print hoto
    cout<<"*p : "<< *p <<endl;

    cout<<"&s[1] : "<< &s[1] <<endl; 
    // From the given address upto null character it prints the char array
    return 0;
}