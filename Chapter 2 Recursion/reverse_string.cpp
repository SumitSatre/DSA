#include <iostream>
#include <stdio.h>
using namespace std;

void reverse(string &s , int len){
    static int i = 0;

    // Base Condition
    if(i>=len){
        return;
    }

    // processing
    swap(s.at(i) , s.at(len-1));
    i++;

    // Recursive relation
    reverse(s , len-1);
}

int main(){
    string s = "Sumit Satre OP";

    reverse(s , s.length());

    cout<<s<<endl;
    return 0;
}