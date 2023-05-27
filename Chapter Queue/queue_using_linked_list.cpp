#include <iostream>
#include <stdio.h>
using namespace std;

struct node{
    int data;
    struct node *next;
};

struct node *front = NULL , *rear = NULL;

void enqueue(int key){
    struct node *t;
    t = new node;

    t->data = key;
    t->next = NULL;

    if(front==NULL){
        front=rear=t;
    }
    else{
        rear->next = t;
        rear = t;
    }
}

void dequeue(){
    int x = -1;
    struct node *t;

    if(front == NULL){
        cout<<"Queue is empty\n";
    }
    else{
        x = front->data;
        t=front;
        front = front->next;
        delete t;
    }
    cout<<"Deleted element : "<<x<<endl;
}

void display(){
    struct node *t;
    t = front;

    cout<<"Elements are : ";
    while(t->next!=NULL){
        cout<<t->data<<"  ";
        t = t->next;
    }
    cout<<endl;
}

int main(){
    enqueue(10);
    enqueue(40);
    enqueue(45);
    enqueue(9);
    enqueue(90);
    enqueue(89);
    enqueue(47);

    display();

    dequeue();

    display();
    return 0;
}