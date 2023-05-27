#include <iostream>
using namespace std;

struct node{
    node *lchild;
    int data;
    node *rchild;
}*root = NULL;

void insert(int key){
    node *t = root;
    node *p , *r;

    if(root==NULL){                                                 
        p = new node;
        p->data = key;
        p->lchild = p->rchild = NULL;

        root = p;
        return ;
    }

    while(t!=NULL){
        r=t;
        if(t->data == key){
            return;
        }
        else if(t->data<key){
            t = t->rchild;
        }
        else{
            t = t->lchild;
        }
    }

    p = new node;
    p->data = key;
    p->lchild = p->rchild = NULL;

    if(key<r->data){
        r->lchild = p;
    }
    else{
        r->rchild = p;
    }

}

node* search(int key){
    node *t = root;

    while(t!=NULL){

        if(t->data == key){
            return t;
        }
        else if(t->data<key){
            t = t->rchild;
        }
        else{
            t = t->lchild;
        }
    }
    return NULL;
}

// Inorder work as display funtion
void inorder(node *p){
    if(p!=NULL){
        inorder(p->lchild);
        cout<<p->data<<"  ";
        inorder(p->rchild);
    }
}

void leaf_nodes(node *p){
    if(p!=NULL){
        leaf_nodes(p->lchild);
        if(p->lchild == NULL && p->rchild == NULL){
            cout<<p->data<<"  ";
        }
        leaf_nodes(p->rchild);
    }
}

void mirror_image(node *p){
    if(p!=NULL){
        mirror_image(p->rchild);
        cout<<p->data<<"  ";
        mirror_image(p->lchild);
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
    inorder(root);

    cout<<endl<<"The leaf nodes of Binary search tree are : ";
    leaf_nodes(root);

    cout<<endl<<"The mirror image of Binary search tree are : ";
    mirror_image(root);
    
    node *x = search(7);

    if(x==NULL){
        cout<<"\nElement is not found"<<endl;
    }                      
    else{
        cout<<"\nElement is found"<<endl;
    }     
    return 0;
}