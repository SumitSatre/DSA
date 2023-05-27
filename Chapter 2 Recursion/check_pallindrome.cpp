#include <iostream>
#include <stdio.h>
using namespace std;

bool check_pallindrome(string &s , int len){
    static int i = 0;

    // Base Condition
    if(i>len){
        return true;
    }

    // processing
    if(s.at(i) != s.at(len-1)){
        return false;
    }
    i++;

    // Recursive relation
    return check_pallindrome(s , len-1);
}

int main(){
    string s ;
    cout<<"Enter the string : ";
    getline(cin , s);

    int x = check_pallindrome(s , s.length());

    if(x){
        cout<<"The string is pallindrome "<<endl;
    }
    else{
        cout<<"The string not is pallindrome "<<endl;
    }
    return 0;
}