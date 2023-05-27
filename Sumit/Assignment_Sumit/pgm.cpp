#include <iostream>
#include <stdio.h>
#include <queue>
using namespace std;

struct node{
    node *lchild;
    int data;
    node *rchild;
}*root = NULL;

void insert(int key){
    node *t ,*r ,*p;

    if(root == NULL){
        t = new node;
        t->lchild = t->rchild = NULL;
        t->data = key;

        root = t;
        return ;
    }
    t = root;

    while(t != NULL){
        r = t;

        if(t->data == key){
            return;
        }

        else if(t->data > key){
            t = t->lchild;
        }
        else{
            t = t->rchild;
        }
    }

    p = new node;
    p->lchild = p->rchild = NULL;
    p->data = key;

    if(r->data < key){
        r->rchild = p;
    }
    else{
       r->lchild = p; 
    }
}

void search(int key){
    node *t;
    t = root;
    int flag = 0;

    while(t != NULL){

        if(t->data == key){
            flag= 1;
            break;
        }

        else if(t->data > key){
            t = t->rchild;
        }
        else{
            t = t->lchild;
        }
    }

    if(flag == 1){
        cout<<"The element is present in tree"<<endl;
    }
    else{
        cout<<"The element is not present in tree"<<endl;
    }
}

void display(node *t){

    if(t!=NULL){
        display(t->lchild);
        cout<<t->data<<"  ";
        display(t->rchild);
    }
}

void leaf_nodes(node *t){

    if(t!=NULL){
        leaf_nodes(t->lchild);
        
        if(t->lchild == NULL && t->rchild == NULL){
            cout<<t->data<<"  ";
        }

        leaf_nodes(t->rchild);
    }
}

void mirror_image(node *t){

    if(t!=NULL){
        mirror_image(t->rchild);
        cout<<t->data<<"  ";
        mirror_image(t->lchild);
    }
}

void level_order_traversal(){
    node *t , *p;
    t = root;
    queue <node*> q;
    q.push(root);
    q.push(NULL);

    while( !(q.empty()) ){
        p = q.front();
        q.pop();

        if(p == NULL){
            cout<<endl;
            if( !(q.empty()) ){
                q.push(NULL);
            }
        }
        else{
            cout<<p->data<<" ";

            if(p->lchild != NULL){
                q.push(p->lchild);
            }

            if(p->rchild != NULL){
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

    cout<<"\nThe elements of Binary search tree are : ";
    display(root);

    cout<<endl<<"\nThe leaf nodes of Binary search tree are : ";
    leaf_nodes(root);

    cout<<endl<<"\nThe mirror imageof Binary search tree are : ";
    mirror_image(root);

    cout<<endl<<"\nThe level_order_traversal of Binary search tree are : \n";
    level_order_traversal();
    
    search(7);
    return 0;
}