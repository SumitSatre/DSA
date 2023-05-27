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

void insert_at_tail(node* &tail , int d){
    node *temp = new node(d);
    tail->next = temp;
    tail = temp;
}

void insert_at_head(node* &head , int d){
    node *temp = new node(d);
    temp->next = head;
    head = temp;
}

void insert_at_position(node* &head, node* &tail ,int position , int d){
    node *temp = head;

    if(position == 1){
        insert_at_head(head , d);
        return;
    }

    int i = 1;

    while(i<position-1){
        temp = temp->next;
        i++;
    }
    
    if(temp->next == NULL){
        insert_at_tail(tail,d);
        return;
    }

    node *t = new node(d);
    t->next = temp->next;
    temp->next = t;
}

void delete_position(node* &head , node* &tail , int position){
    node *temp , *p;
    temp = head;
    int i =1;

    if(position ==1){
        p = head;
        head = head->next;

        cout<<"Deleted Element at position "<<position<<" is : "<<p->data<<endl;
        delete p;
        return;
    }

    while(i<position-1){
        temp = temp->next;
        i++;
    }

    p = temp->next;

    if(p->next == NULL){
        temp->next = NULL;
        tail = temp;

        cout<<"Deleted Element at position "<<position<<" is : "<<p->data<<endl;
        delete p;
        return;
    }

    temp->next = p->next;
    cout<<"Deleted Element at position "<<position<<" is : "<<p->data<<endl;
    delete p;
}

void print(node *head){
    node *temp = head;

    cout<<"Elements are : ";

    while(temp != NULL){
        cout<<temp->data<<"  ";
        temp = temp->next;
    }
    cout<<endl;
}

void reverse(node* &head){
    node *prev = NULL,
          *curr = head , 
           *forward = NULL;

    while(curr != NULL){
        forward = curr->next;
        curr->next = prev;
        prev = curr;
        curr = forward;
    }

    head = prev;
}

int main(){
    node *head = new node(12);    
    node *tail = head;

    insert_at_tail(tail , 15);
    insert_at_tail(tail , 5);
    
    insert_at_position(head ,tail, 2, -4);

    insert_at_head(head , 6);

    insert_at_position(head ,tail, 5, 56);

    print(head);

    delete_position(head ,tail, 6);
    print(head);

    cout<<"Head : "<<head->data<<endl<<"Tail : "<<tail->data<<endl;
    
    reverse(head);
    print(head);

    delete head , tail;
    return 0;
}