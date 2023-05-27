// 186.Revere words in a string 2

#include <iostream>
#include <stdio.h>
#include <string>
using namespace std;

void reverse(string &b ,int s , int e){

    for( int i = s ; i<e ; i++ , e--){
        swap(b[i] , b[e-1]);
    }
} 

int main(){
    string a = "Sumit Satre king op";
    a.push_back(' ');

    int s =0 , e = 0 , i = 0;

    while( i<a.length() ){

        while( e<a.length() ){
            if(a[e] == ' '){
                reverse(a,s,e);
                s= e+1;
                e= e+1;
                break;

            }
            e++;
        }
        i++;
    }
    
    a.pop_back();
    cout<<"String is : "<<a<<endl;
    return 0;
}