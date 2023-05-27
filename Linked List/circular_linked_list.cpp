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

void insert(node* &tail ,int element ,int d){
    if(tail == NULL){
        tail = new node(d);
        tail->next = tail;
    }
    else{
        node* t = new node(d);

        node *temp = tail;

        while(temp->data != element){
            temp = temp->next;

            if(temp == tail ){
                cout<<"Element not found in list"<<endl;
                return;
            }
        }

        t->next = temp->next;
        temp->next = t;
    }
}

void delete_element(node* &tail ,int d){

    if(tail == NULL){
        cout<<"List is empty"<<endl;
    }
    if(tail == tail->next){
        tail =NULL;
        return;
    }
    
    node *pre = tail, *curr = pre ->next;

    while(curr->data != d){
        pre = curr;
        curr = curr->next;

        if(curr == tail->next){
            cout<<"Element not found in list"<<endl;
            return;
        }
    }

    pre->next = curr->next;
    cout<<"Deleted element : "<<curr->data<<endl;

    if(tail == curr){
        tail = pre;
    }
    delete curr;
}

void print(node *tail){

    if(tail == NULL){
        cout<<"List is empty"<<endl;
        return;
    }

    node *t = tail;

    cout<<"Elements are : ";
    do{
        cout<<t->data<<"  ";
        t = t->next;
    }while(t != tail);

    cout<<endl;
}


int main(){
    node *tail = NULL;

    insert(tail , 4 ,-7);
    insert(tail , -7 ,5);
    insert(tail , 5 ,8);
    insert(tail , 5 ,9);
    print(tail);

    delete_element(tail , 5);
    print(tail);

    delete_element(tail , 9);
    print(tail);

    delete_element(tail , -7);
    print(tail);

    delete_element(tail , 8);
    print(tail);

    return 0;
}