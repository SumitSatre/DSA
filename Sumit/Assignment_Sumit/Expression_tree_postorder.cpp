#include <iostream>
#include <stdio.h>
using namespace std;

struct node{
    node *lchild;
    char data;
    node *rchild;
};

// Creating a stack

char postfix[50];
int top = -1;
node* arr[50];

void push(node *x){
    top++;
    arr[top] = x;
}

node *pop(){
    node *x = NULL;
    x = arr[top];
    top--;
    return x;
}

int check(char ch){
    if(ch == '*' || ch == '/' || ch == '-' || ch == '+'){
        return -1;
    }
    else if(ch >= 'A' || ch<= 'Z'){
        return 1;
    }
    else if(ch >= 'a' || ch<= 'z'){
        return 1;
    }
    else{
        return -1000;
    }
}

void create_expression_tree(char *pf){
    char s;
    int flag;
    node *t , *p1 , *p2;

    for(int i = 0 ; s != 0 ; i++){
        s = pf[i];
        flag = check(s);

        if(flag == 1){
            t = new node;
            t->data = s;
            t->lchild = t->rchild = NULL;
            push(t);
        }
        else{
            p1 = pop();
            p2 = pop();

            t = new node;
            t->data = s;
            t->lchild = p2;
            t->rchild = p1;
            push(t);
        }
    }
}


void inorder(node *root){
    if(root!=NULL){
        inorder(root->lchild);
        cout<<root->data;
        inorder(root->rchild);
    }
}

void preorder(node *root){
    if(root!=NULL){
        cout<<root->data;
        preorder(root->lchild);
        preorder(root->rchild);
    }
}

void postorder(node *root){
    if(root!=NULL){
        postorder(root->lchild);
        postorder(root->rchild);
        cout<<root->data;
    }
}

int main(){
    cout<<"Enter the postfix expression : ";
    cin>>postfix;

    create_expression_tree(postfix);

    cout<<"\n Inorder Expression : ";
    inorder(arr[0]);

    cout<<"\n Preorder Expression : ";
    preorder(arr[0]);

    cout<<"\n Postorder Expression : ";
    postorder(arr[0]);
    return 0;
}