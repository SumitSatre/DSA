#include <iostream>
#include <stdio.h>
using namespace std;

struct node{
    node *lchild;
    int data;
    node *rchild;

    node(int s){
        data = s;
        lchild = NULL;
        rchild = NULL;
    }
};

node *buildTree(node *root){
    cout<<"\nEnter the data : ";
    int data ;
    cin>>data;
    root = new node(data);

    if(data==-1){
        return NULL;
    }

    cout<<"Enter the data for left of "<<data;
    root->lchild = buildTree(root->lchild);

    cout<<"Enter the data for right of "<<data;
    root->rchild = buildTree(root->rchild);
    return root;
}

void preorder(node *p){
    if(p!=NULL){
        cout<<p->data<<"  ";
        preorder(p->lchild);
        preorder(p->rchild);
    }
}


void inorder(node *p){
    if(p!=NULL){
        inorder(p->lchild);
        cout<<p->data<<"  ";
        inorder(p->rchild);
    }
}

void postorder(node *p){
    if(p!=NULL){
        postorder(p->lchild);
        postorder(p->rchild);
        cout<<p->data<<"  ";
    }
}

int main(){
    node* root = NULL;
    root = buildTree(root);
    
    cout<<"\nThe Preorder is : ";
    preorder(root);

    cout<<"\nThe Inorder is : ";
    inorder(root);

    cout<<"\nThe Postorder is : ";
    postorder(root);
    return 0;
}