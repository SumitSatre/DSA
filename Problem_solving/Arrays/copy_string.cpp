// at the position of space in the string you have to type @40

#include <iostream>
#include <stdio.h>
using namespace std;

int main(){
    string s = "sumit satre op";
    string a;

    for(int i = 0 ; s[i] != '\0' ; i++){

        if(s[i] == ' '){
            a.push_back('@') ;
            a.push_back('4') ;
            a.push_back('0') ;
        }

        else{
            a.push_back(s[i]) ;
        }
    }

    cout<<a<<endl;
    return 0;
}