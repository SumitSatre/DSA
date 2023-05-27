// This operation we can do by call by reference and call by address method also 

#include <iostream>
#include <stdio.h>
using namespace std;

struct test{
    int a[5];
    int n;
};

void func(struct test r){
    cout<<r.a[0]<<endl;
    cout<<r.a[1]<<endl;
    cout<<r.a[2]<<endl;
}

int main(){
    struct test r = {{11,12,13,14,15} , 5};

    func(r);
    return 0;
}

