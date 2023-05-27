#include <iostream>
#include <stdio.h>
using namespace std;

struct Rectangle{
    int length;
    int breath;
};

// This is call by value method
void area1(struct Rectangle r1){
    cout<<"The area is "<<r1.length*r1.breath<<endl;
    r1.length++;
    r1.breath++;
}

// This is call by reference method
void area2(Rectangle &r1){
    r1.length++;
    r1.breath++;
    cout<<"The area is "<<r1.length*r1.breath<<endl;
}

// This is call by address method
void area3(Rectangle *r1){
    r1->length++;
    r1->breath++;
    cout<<"The area is "<<r1->length * (r1->breath)<<endl;
}

int main(){
    struct Rectangle r = {5,10};

    area1(r);
    cout<<r.length<<endl<<r.breath<<endl;
    // In the call by value method the value of if changed parameters cannpt impact the main function 

    area2(r);
    cout<<r.length<<endl<<r.breath<<endl;


    area3(&r);
    cout<<r.length<<endl<<r.breath<<endl;
    return 0;
}