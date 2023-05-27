#include <iostream>
#include <stdio.h>
using namespace std;

struct node{
    node *prev;
    int data;
    node *next;

    node(int d){
        this->data = d;
        this->prev = NULL;
        this->next = NULL;
    }

    ~node(){
        int value = this->data;
        if(this->next != NULL){
            delete next;
            next = NULL;
        }
        cout<<"The memory is free for data : "<<value<<endl;
    }
};

void print_forward(node *head){
    node *temp = head;

    cout<<"Elements are : ";

    while(temp!=NULL){
        cout<<temp->data<<"  ";
        temp = temp->next;
    }
    cout<<endl;
}

void print_reverse(node *tail){
    node *temp = tail;

    cout<<"Elements are : ";

    while(temp!=NULL){
        cout<<temp->data<<"  ";
        temp = temp->prev;
    }
    cout<<endl;
}

void getLength(node *head){
    int i = 0;
    node *temp = head;

    while(temp!=NULL){
        temp = temp->next;
        i++;
    }

    cout<<"Length of linked list is : "<<i<<endl;
}

void insert_at_head(node* &head , node* &tail , int d){

    if(head == NULL){
        head = new node(d);
        tail = head;
        return;
    }

    node* temp = new node(d);
    temp->next = head;
    head->prev = temp;
    head = temp;
}

void insert_at_tail(node* &head, node* &tail , int d){

    if(tail == NULL){
        tail = new node(d);
        head = tail;
        return;
    }

    node* temp = new node(d);
    temp->prev = tail;
    tail->next = temp;
    tail = temp;
}

void insert_at_position(node* &head, node* &tail ,int position , int d){
    node *temp = head;

    if(position == 1){
        insert_at_head(head ,tail, d);
        return;
    }

    int i = 1;

    while(i<position-1){
        temp = temp->next;
        i++;
    }
    
    if(temp->next == NULL){
        insert_at_tail(head,tail,d);
        return;
    }

    node *t = new node(d);
    t->next = temp->next;
    temp->next->prev = t;
    t->prev = temp;
    temp->next = t;
}

void delete_position(node* &head , node* &tail , int position){
    node *temp , *p;
    temp = head;
    int i =1;
    
    if(position ==1){
        p = head;
        head = head->next;
        head->prev = NULL;

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
    p->next->prev = temp;
    cout<<"Deleted Element at position "<<position<<" is : "<<p->data<<endl;
    delete p;
}

int main(){
    node *head = NULL , 
    *tail = NULL;

    insert_at_head(head ,tail, 5);
    insert_at_head(head ,tail, 9);
    print_forward(head);

    insert_at_tail(head ,tail , -4);
    insert_at_tail(head ,tail , 14);
    print_forward(head);

    print_reverse(tail);

    insert_at_position(head , tail , 3 , 45);
    print_forward(head);

    delete_position(head , tail ,5);
    print_forward(head);
    print_reverse(tail);

    delete head , tail;
    return 0;
}
