#include <iostream>
#include<stdio.h>
using namespace std;

struct Node{
    Node *lchild;
    int data;
    Node *rchild;
};

class Queue {
    private:
     int front;
     int rear;
     int size;
     Node **Q;
    public:
    Queue(){
        front=rear=-1;
        size=10;
        Q=new Node*[size];
    }
    
    Queue(int size){
        front=rear=-1;
        this->size=size;
        Q=new Node*[size];
    }

    void enqueue(Node *x){
        if(rear==size-1){
        printf("Queue Full\n");
        }
        else{
        rear++;
        Q[rear]=x;
        }
    }

    Node *dequeue(){
        Node *x=NULL;
        if(front==rear){
        printf("Queue is Empty\n");
        }

        else{
        x=Q[front+1];
        front++;
        }
        return x;
    }
    int isEmpty(){ 
        return front==rear;}
};


class Tree{
    Node *root;
public:
    Tree(){root=NULL;}
    void CreateTree();
    void Preorder(){Preorder(root);}
    void Preorder(Node *p);
    void Postorder(){Postorder(root);}
    void Postorder(Node *p);
    void Inorder(){Inorder(root);}
    void Inorder(Node *p);
};

void Tree::CreateTree()
{
    Node *p,*t=NULL;
    int x;
    Queue q(100);
    printf("Eneter root value : ");
    scanf("%d",&x);
    root=new Node;
    root->data=x;
    root->lchild=root->rchild=NULL;
    q.enqueue(root);
    
    while(!q.isEmpty()){
    p=q.dequeue();

    printf("eneter left child of %d : ",p->data);
    scanf("%d",&x);
    if(x!=-1){
        t=new Node;
        t->data=x;
        t->lchild=t->rchild=NULL;
        p->lchild=t;
        q.enqueue(t);
    }

    printf("eneter right child of %d : ",p->data);
    scanf("%d",&x);
    if(x!=-1){
        t=new Node;
        t->data=x;
        t->lchild=t->rchild=NULL;
        p->rchild=t;
        q.enqueue(t);
    }
    }
}

void Tree::Preorder(struct Node *p){
    if(p){
    printf("%d ",p->data);
    Preorder(p->lchild);
    Preorder(p->rchild);
    }
}

void Tree::Inorder(struct Node *p){
    if(p){
    Inorder(p->lchild);
    printf("%d ",p->data);
    Inorder(p->rchild);
    }
}

void Tree::Postorder(struct Node *p){
    if(p){
    Postorder(p->lchild);
    Postorder(p->rchild);
    printf("%d ",p->data);
    }
}

int main() {
    Tree t;
    t.CreateTree();

    cout<<"Preorder ";
    t.Preorder();
    cout<<endl;

    cout<<"Inorder ";
    t.Inorder();
    cout<<endl<<endl;
    return 0;
}