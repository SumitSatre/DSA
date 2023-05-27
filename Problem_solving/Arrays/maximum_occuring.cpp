#include <iostream>
#include <stdio.h>
using namespace std;

char InLowercase(char ch){
    if( ( int(ch)>=97 && int(ch)<=122 ) || (ch>='0' && ch<='9') ){
        return ch;
    }
    else if (ch>='A' && ch<='Z') {
        char temp = int(ch) + 32;
        return temp;
    }
    else{
        return ch;
    }
}

int occurrence(string a ,int i ){

    int count = 1;
    for(int j = i + 1 ; j<a.length() ; j++ ){
        if( InLowercase(a[i]) == InLowercase(a[j])){
            count++;
        }
    }
    return count;
}

int main(){

    string a = "testsample";

    int max = 0 , index = 0;
    for(int i = 0 ; i<a.length() ; i++){

        if(max <= occurrence(a,i)){
            max = occurrence(a,i);
            index = i;
        }

    }

    cout<<a[index] <<" : "<<max;
    return 0;
}