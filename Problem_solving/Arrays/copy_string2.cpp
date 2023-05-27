// at the position of space in the string you have to type @40
// Remaining

#include <iostream>
#include <stdio.h>
using namespace std;

int main(){
    string s = "sumit satre op";

    for(int i = 0 ; s[i] != '\0' ; i++){

        if(s[i] == ' '){
            for(int j = 14 ; i<j ; j--){
                s[j+2] = s[j];
            }

            s[i] = '@';
            s[i+1] = '4';
            s[i+2] = '0';
        }
    }

    cout<<s<<endl;
    return 0;
}