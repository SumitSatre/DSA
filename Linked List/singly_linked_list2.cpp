#include <iostream>
#include <stdio.h>
using namespace std;

struct node{
    int data ;
    node *next;

    node(int d){
        data = d;
        next = NULL;
    }
    node(){
        next = NULL;
    }
};

void insert_at_tail(node* &tail , int key){
    node *t = new node(key);
    tail->next = t;
    tail = t;
}

void insert_at_head(node* &head , int key){
    node *t = new node(key);
    t->next = head;
    head = t;
}


void print(node* head){

    while(head != NULL){
        cout<<head->data<<"  ";
        head= head->next;
    }
    cout<<endl;
}

void insert_at_position(node* &head ,node* &tail ,int position , int key){

    node *t , *p;

    if(position == 1){
        p = new node(key);
        p->next = head;
        head = t;
        return;
    }

    int i = 1;
    t = head;
    while(i < position-1){
        t = t->next;
        i++;
    }

    if(t->next == NULL){
        p = new node(key);
        t->next = p;
        tail = t;
        return;
    }

    p = new node(key);
    p->next = t->next;
    t->next = p;

}

void delete_position(node* &head ,node* &tail ,int position){

    node *t , *p ,*prev;

    if(position == 1){
        p = head;
        head = head->next;
        delete p;
        return;
    }

    int i = 1;
    t = head;
    while(i < position-1){
        prev = t;
        t = t->next;
        i++;
    }

    if(t->next == NULL){
        tail = prev;
        delete t;
        return;
    }

    p=t->next;
    t->next = p->next;

}

int main(){
    node *head = new node(12);    
    node *tail = head;

     insert_at_tail(tail , 15);
     insert_at_tail(tail , 5);
     
     insert_at_position(head ,tail, 2, -4);
// 
     insert_at_head(head , 6);
// 
     insert_at_position(head ,tail, 5, 56);
// 
     print(head);
// 
     delete_position(head ,tail, 1);
    // print(head);
// 
    // cout<<"Head : "<<head->data<<endl<<"Tail : "<<tail->data<<endl;
    // 
    // reverse(head);
     print(head);

    delete head , tail;
    return 0;
}