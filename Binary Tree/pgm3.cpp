#include <iostream>
using namespace std;

struct node{
    node *lchild;
    int data ;
    node *rchild;
};

struct queue{
    int size;
    int front , rear;
    node **arr;

    queue(){
        size = 100;
        front=rear=-1;

        arr = new node* [size];
    }

    void enqueue(node *x){
        if(rear == size-1){
            cout<<"Queue is full"<<endl;
        }
        else{
            rear++;
            arr[rear] = x;
        }
    }

    node* dequeue(){
        node *x = NULL;

        if(front == rear){
            cout<<"Queue is empty"<<endl;
        }
        else{
            front++;
            x = arr[front];
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

class tree{
    public:
    
    node *p , *t , *root;
    queue q;

    tree(){
        root = new node;
        root->lchild = root->rchild = NULL;

        int x;
        cout<<"Enter root node value : ";
        cin>>x;
        root->data = x;

        q.enqueue(root);

        while(!(q.isEmpty())){
            p = q.dequeue();

            cout<<"Enter the left child of "<<p->data<<" : ";
            cin>>x;

            if(x!=-1){
                t = new node;
                t->lchild = t->rchild = NULL;
                t->data = x;

                p->lchild = t;
                q.enqueue(t);
            }

            cout<<"Enter the right child of "<<p->data<<" : ";
            cin>>x;

            if(x!=-1){
                t = new node;
                t->lchild = t->rchild = NULL;
                t->data = x;

                p->rchild = t;
                q.enqueue(t);
            }
        }
    }

    void inorder(node *x){
        if(x!=NULL){
            inorder(x->lchild);
            cout<<x->data<< "  ";
            inorder(x->rchild);
        }
    }

    void inorder(){
        cout<<"\ninorder : ";
        inorder(root);
    }

    void preorder(node *x){
        if(x!=NULL){
            cout<<x->data<< "  ";
            preorder(x->lchild);
            preorder(x->rchild);
        }
    }

    void preorder(){
        cout<<"\nPreorder : ";
        preorder(root);
    }

    void postorder(node *x){
        if(x!=NULL){
            postorder(x->lchild);
            postorder(x->rchild);
            cout<<x->data<< "  ";
        }
    }

    void postorder(){
        cout<<"\npostorder : ";
        postorder(root);
    }

};


int main(){
    tree t;
    t.inorder();
    t.preorder();
    t.postorder();
    return 0;
}