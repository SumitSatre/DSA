#include <iostream>
#include <stdio.h>
using namespace std;
// it is used to write code in the function upto 3 lines 
// it is used to reduce execution time
inline void func(int a){
    cout<<"sumit"<<endl;
    cout<<a<<endl;
}
int main(){
    int a = 34;

    func(a);
    return 0;
}