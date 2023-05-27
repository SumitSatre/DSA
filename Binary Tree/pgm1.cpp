#include <iostream>
#include <stdio.h>
using namespace std;

struct node{
    node *lchild;
    int data;
    node *rchild;
};

class queue{
    public:

    int front , rear , size ;
    node **Q;

    queue(int s){
        size = s;
        front=rear=-1;

        Q = new node*[size];
    }

    void enqueue(node *x){
        if(rear==size-1){
            cout<<"Queue is full \n";
        }
        else{
            rear++;
            Q[rear] = x;
        }
    }

    node *dequeue(){
        node *x = NULL;
        if(front==rear){
            cout<<"Queue is empty \n";
        }
        else{
            x = Q[front+1];
            front++;
        }
        return x;
    }

    int isEmpty(){
        if(front==rear){
            return 1;
        }
        else{
            return 0;
        }
    }
};

class Tree{
    public:
    node *p , *t , *root;
    
    Tree(){
        queue q(100);
        root = new node;
        root->lchild = root->rchild = NULL;

        int x;
        cout<<"Enter the root node value : ";
        cin>>x;

        root->data = x;

        q.enqueue(root);

        while(!(q.isEmpty())){
            p = q.dequeue();

            cout<<"Enter the left child of "<<p->data<<" : ";
            cin>>x;
            if(x!=-1){
                t = new node;
                t->data = x;
                t->lchild = t->rchild = NULL;
                p->lchild = t;
                q.enqueue(t);
            }

            cout<<"Enter the right child of "<<p->data<<" : ";
            cin>>x;
            if(x!=-1){
                t = new node;
                t->data = x;
                t->lchild = t->rchild = NULL;
                p->rchild = t;
                q.enqueue(t);
            }
        }
    }

    void preorder(node *p){
        if(p!=NULL){
            cout<<p->data<<"  ";
            preorder(p->lchild);
            preorder(p->rchild);
        }
    }

    void preorder(){
        preorder(root);
    }

    void inorder(node *p){
        if(p!=NULL){
            inorder(p->lchild);
            cout<<p->data<<"  ";
            inorder(p->rchild);
        }
    }

    void inorder(){
        inorder(root);
    }

    void postorder(node *p){
        if(p!=NULL){
            postorder(p->lchild);
            postorder(p->rchild);
            cout<<p->data<<"  ";
        }
    }

    void postorder(){
        postorder(root);
    }
};


int main(){
    Tree t;
     
    cout<<"\nThe Preorder is : ";
    t.preorder();

    cout<<"\nThe Inorder is : ";
    t.inorder();

    cout<<"\nThe Postorder is : ";
    t.postorder();

    return 0;
}
