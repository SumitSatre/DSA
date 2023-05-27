#include <iostream>
#include <stdio.h>
#include <string>
using namespace std;

int valid(char ch){
    if((ch>='a' && ch<='z') || (ch>='A' && ch<='Z') || (ch>='0' && ch<='9')){
        return 1;
    }
    return 0;
}

char InLowercase(char ch){
    if( ( int(ch)>=97 && int(ch)<=122 ) || (ch>='0' && ch<='9') ){
        return ch;
    }
    else{
        char temp = int(ch) + 32;
        return temp;
    }
}

int check_palindrome(string a){
    for( int s = 0 , e = a.length() - 1 ; s<=e ; s++ , e--){
    
        if(a[s] != a[e]){
            return 0;
        }
    }
    return 1;
}

int main(){
    string s;
    cout<<"Enter the string : ";
    getline(cin,s);

    string temp;

    for(int i = 0 ; i<s.length() ; i++){
        if( valid(s[i]) ){
            temp.push_back(s[i]);
        }
    }
    
    for(int i = 0 ; i<temp.length() ; i++){
        temp[i] = InLowercase(temp[i]);
    }

    int x = check_palindrome(temp);

    if(x==1){
        cout<<"Palindrome";
    }
    else{
        cout<<"Not Palindrome";
    }
    return 0;
}

//  n******o**o**////n == pallindrome