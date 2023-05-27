/* 
lowercase to uppercase : :
temp = ch -'a' + 'A';

uppercase to lowercase:
temp = ch -'A' + 'a';   eg. 66 - 65 + 97 = 98     // 66 == 'B' ,  98 == 'b'
*/

#include <iostream>
#include <stdio.h>
#include <string.h>
#include <string>
using namespace std;

char InLowercase(char ch){
    if(int(ch)>=97 && int(ch)<=122){
        return ch;
    }
    else{
        char temp = int(ch) + 32;
        return temp;
    }
}

 
int Size(char b[]){
    int size = 0;
    for( int i = 0 ; b[i]!='\0' ; i++){
        size++;
    }
    return size;
}

void reverse(char b[] , int size){
    int n = size / 2;

    for( int i = 0 ; i<n ; i++){
        swap(b[i] , b[size-1]);
        size--;
    }
    cout<<"The reverse is : "<<b<<endl;
} 

int check_palindrome(char a[] , int size){
    for( int s = 0 , e = size-1 ; s<=e ; s++ , e--){
        while (!(isdigit(a[s]))){
            s++;
            cout<<"\ns is "<<s<<endl;
        }

        while (!(isdigit(a[e]))){
            e--;
            cout<<"\ne is "<<e<<endl;
        }

        if(a[s] != a[e]){
            return 0;
        }
    }
    return 1;
}

int main(){
    cout<<int('a');
    char b[2000] ;
    cout<<"Enter the string : ";
    cin.getline(b,20);

    int size = Size(b);
    cout<<size<<endl;
    int x = palindrome(b,size);

    reverse(b , size);
    
    if(x==1){
        cout<<"Palindrome";
    }
    else{
        cout<<"Not Palindrome";
    }
    return 0;
}

// 5?36@6?35