#include <iostream>
using namespace std;

struct node{
    int data;
    struct node *next;
};

int main(){
    node *head, *p , *temp , *t;
    head = new node;
    head->data = 12;
    head->next = NULL;
    temp = head;
    

    for(int i = 0 ; i<5 ; i++){
        p = new node;
        cout<<"Enter the value : ";
        cin>>p->data;
        p->next = temp;
        temp = p;

    }

    t = new node;
    t = temp;
    temp = temp->next;
    delete t;

    // display
    while(temp!=NULL){
        cout<<temp->data<<"  ";
        temp = temp->next;
    }
    return 0;
}

