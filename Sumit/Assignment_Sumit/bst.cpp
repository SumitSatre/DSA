#include <iostream>
#include <stdio.h>
#include <queue>
using namespace std;

struct node{
    node *lchild;
    int data ;
    node *rchild;
}*root = NULL;

void insert(int key){
    node *t , *r ,*p;
    t = root;

    if(root == NULL){
        p = new node;
        p->lchild = p->rchild = NULL;
        p->data = key;

        root = p;
    }

    while(t != NULL){
        r = t;

        if(t->data == key){
            return;
        }

        else if(t->data > key){
            t = t->lchild ;
        }
        else{
            t = t->rchild ;
        }
    }

    p = new node;
    p->lchild = p->rchild = NULL;
    p->data = key;

    if(r->data > key){
        r->lchild = p;
    }
    else{
        r->rchild = p;
    }

}

node* search(int key){
    node* t = root;

    while(t != NULL){

        if(t->data == key){
            return t;
        }

        else if(t->data > key){
            t = t->lchild ;
        }
        else{
            t = t->rchild ;
        }
    }
    return NULL;
}

void display(node* t){
    if(t!=NULL){
        display(t->lchild);
        cout<<t->data<<" ";
        display(t->rchild);
    }
}

void leaf_nodes(node* t){
    if(t!=NULL){
        leaf_nodes(t->lchild);

        if(t->lchild == NULL && t->rchild == NULL){
            cout<<t->data<<" ";
        }

        leaf_nodes(t->rchild);
    }
}

void level_order_traversal(){
    node* t , *p;
    t = root;
    queue <node*> q;
    q.push(t);
    q.push(NULL);

    while(!(q.empty())){
        p = q.front();
        q.pop();

        if(p == NULL){
            cout<<endl;
            if( !(q.empty()) ){
                q.push(NULL);
            }
        }
        else{
            cout<<p->data<<"  ";

            if(p->lchild != NULL){
                q.push(p->lchild);
            }
            if(p->lchild != NULL){
                q.push(p->rchild);
            }
        }
    }
}

int main(){
    insert(38);
    insert(14);                                     
    insert(56);                                     
    insert(23);                                     
    insert(82);                                     
    insert(8);                                     
    insert(45);      
    insert(70);   
    insert(18);  
    insert(15);     

    cout<<"The elements of Binary search tree are : ";
    display(root);

    cout<<endl<<"The leaf nodes of Binary search tree are : ";
    leaf_nodes(root);

    cout<<endl<<"The level_order_traversal of Binary search tree are : \n";
    level_order_traversal();
    
    node *x = search(7);

    if(x==NULL){
        cout<<"\nElement is not found"<<endl;
    }                      
    else{
        cout<<"\nElement is found"<<endl;
    }     
    return 0;
}