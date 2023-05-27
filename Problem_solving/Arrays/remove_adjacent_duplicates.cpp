// 1047. Remove all adjacent duplicates in string

#include <iostream>
#include <stdio.h>
using namespace std;

int main(){
    string s = "azxxzy";

    int i = 0 ,x = 0;
    while(1){

        while(i<s.length()){
            if(s[i] == s[i+1]){
                s.erase(i,2);
                x=1;
            }
            i++;
        }

        if(x==0){
            break;
        }

        x=0;
        i=0;
    }

    cout<<s<<endl;
    return 0;
}