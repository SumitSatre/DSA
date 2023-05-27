#include <iostream>
using namespace std;

struct node{
    int data;
    struct node *next;
};


int main(){
    struct node *head , *p ,*temp;
    cout<<"Enter element : ";
    cin>>head->data;
    head->next = NULL;

    p = head;

    while(p->data!=-1){
        p->next = new node;
        p = p->next;
        cout<<"Enter element : ";
        cin>>p->data;
        p->next = NULL;
    }

    // display
    temp = head;
    while(temp->data!=-1){
        cout<<temp->data<<"  ";                                                   
        temp = temp->next;
    }

    delete head , p, temp;
    return 0;
}