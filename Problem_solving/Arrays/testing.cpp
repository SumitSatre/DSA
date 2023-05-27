#include <iostream>
#include <stdio.h>
using namespace std;

int main(){
    for(int i =0 ; i<11 ; i++){
        cout<<i<<endl;
    }

    char ch = 'c';
    int n = ch - 'a';
    cout<<n;

    string s = "abcnc";
    int x = s.find("abc");
    cout<<"The x is : "<<x<<endl;
    s.erase(x , 3);
    cout<<s;

    return 0;
}