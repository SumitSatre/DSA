#include <iostream>
using namespace std;

struct node{
    node *lchild;
    int data;
    node *rchild;
};

struct queue{
    int size;
    int front ;
    int rear ;
    node **arr;

    queue(int s){
        size = s;
        front = rear = -1 ;

        arr = new node*[size];
    }

    void enqueue(node *x){
        if(rear == size-1){
            cout<<"Queue is full";
            return;
        }
        else{
            rear++;
            arr[rear] = x;
        }
    }

    node* dequeue(){
        node *x = NULL;
        if(front == rear){
            cout<<"Queue is empty";
        }
        else{
            x = arr[++front];
        }
        return x;
    }

    int isEmpty(){
        if(front == rear){
            return 1;
        }
        return 0;
    }
};

class Tree{
    public:
    node *root;

    Tree(){
        queue q(100);
        node *p , *t ;

        int x;
        cout<<"Enter root node value : ";
        cin>>x;

        root  = new node;                                                     // line 

        root->lchild = root->rchild = NULL;
        root->data = x;

        q.enqueue(root);

        while( !(q.isEmpty()) ){
            p = q.dequeue();

            cout<<"Enter left node value of "<<p->data<<" : ";
            cin>>x;

            if(x!=-1){
                t = new node;
                t->data = x;
                t->lchild = t->rchild = NULL;

                p->lchild = t;
                q.enqueue(t);
            }

            cout<<"Enter right node value of "<<p->data<<" : ";
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