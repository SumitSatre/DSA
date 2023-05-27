
#include <iostream>
using namespace std;

struct node{
    int data ;
    node *next;
}*top = NULL;

void push(int key){
    node *t ;
    t = new node;
    t->data = key;
    t->next = top;
    top = t;
}

void pop(){
    int x = -1;

    if(top == NULL){
        cout<<"Stack is empty"<<endl;
    }
    else{
        
        node *t ;
        t= top;
        x = t->data;
        top = top->next;
        delete t;
    }
}

void display(){
    node *t;
    t = top;

    while(t != NULL){
        cout<<t->data <<"  ";
        t = t->next;
    }
}


int main(){
    push(10);
    push(20);
    push(30);
    push(40);
    push(50);
    push(60);

    display();

    pop();
    pop();

    display();

    return 0;
}
