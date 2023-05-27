#include <iostream>
using namespace std;

struct node{
    int data;
    struct node *next;
};

int main(){
    node *head, *p , *temp;
    head = new node;
    head->data = 12;
    head->next = NULL;
    p=head;

    for(int i = 0 ; i<5 ; i++){
        p->next = new node;
        
        p = p->next;
        p->next = NULL;
        cout<<"Enter the value : ";
        cin>>p->data;
    }

    // display
    temp=head;
    while(temp!=NULL){
        cout<<temp->data<<"  ";
        temp = temp->next;
    }
    return 0;
}