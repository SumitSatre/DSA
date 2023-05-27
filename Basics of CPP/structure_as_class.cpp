#include <iostream>
#include <stdio.h>
using namespace std;

/* Here in cpp we can write struct at the place of the class it impact that the all the members of the 
class will act as the public members .
Otherwise its all properties work as like as class
*/

struct Rectangle{
    int length;
    int breath;

    void initialize(int l , int b){
        length = l;
        breath = b;
    }

    void area1(){
        cout<<"The area is "<<length*breath<<endl;
}
};


int main(){
    Rectangle r ;

    r.initialize(10,12);
    r.area1();
    return 0;
}