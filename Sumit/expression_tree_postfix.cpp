#include <iostream>
#include <stdio.h>
#include <stack>
using namespace std;

struct node{
    node *lchild;
    char data ;
    node *rchild;
}*root = NULL;

// creating stack
char postfix[50];

int top = -1;
node *arr[50];      

void push(node *x){
    top++;
    arr[top] = x;
}

node* pop(){
    node *x;
    x = arr[top];
    top--;
    return x;
}

int check(char x){
    if(x == '*' || x == '/' || x == '+' || x == '-'){
        return -1;
    }
    else if(x>='A' || x<='Z'){
        return 1;
    }
    else if(x>='A' || x<='Z'){
        return 1;
    }
    else{
        return -1000;
    }
}

void create_expression_tree(char *pf){
    char s;
    node *t ,*p1 , *p2;
    int flag = 0;

    for( int i = 0 ; s!=0 ; i++){
        s = pf[i];
        flag = check(s);

        if(flag == 1){
            t = new node ;
            t->lchild = t->rchild = NULL;
            t->data = s;

            push(t);
        }
        else{
            p1 = pop();
            p2 = pop();

            t = new node ;
            t->lchild = p2;
            t->rchild = p1;
            t->data = s;

            push(t);
        }

    }
}

void inorder(struct node *root)
{   
    stack<node *> s;
    node *curr = root;
 
    while (curr != NULL || s.empty() == false)
    {
        /* Reach the left most Node of the
           curr Node */
        while (curr !=  NULL)
        {
            /* place pointer to a tree node on
               the stack before traversing
              the node's left subtree */
            push(curr);
            curr = curr->lchild;
        }
 
        /* Current must be NULL at this point */
        curr = s.top();
        pop();
 
        cout << curr->data << " ";
 
        /* we have visited the node and its
           left subtree.  Now, it's right
           subtree's turn */
        curr = curr->rchild;
 
    } /* end of while */
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