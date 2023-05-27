#include <iostream>
#include <queue>
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

node* levelordertraversal(node *root){
    queue <node*> q;

    node* p , *t;

    int x;
    cout<<"Enter the root node value : ";
    cin>>x;

    root = new node(x);

    q.push(root);

    while(!(q.empty())){
        p = q.front();
        cout<<p->data<<"  ";
        q.pop();

        cout<<"Enter the left child of "<<p->data<<" : ";
        cin>>x;
        if(x!=-1){
            t = new node(x);
            p->lchild = t;
            q.push(t);
        }

        cout<<"Enter the right child of "<<p->data<<" : ";
        cin>>x;
        if(x!=-1){
            t = new node(x);
            p->rchild = t;
            q.push(t);
        }
    }
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
    node *root = NULL;

    root = levelordertraversal(root);

    cout<<"\nThe Preorder is : ";
    preorder(root);

    cout<<"\nThe Inorder is : ";
    inorder(root);

    cout<<"\nThe Postorder is : ";
    postorder(root);
    return 0;
}
                                                                                                            