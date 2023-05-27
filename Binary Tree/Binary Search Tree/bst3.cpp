#include <iostream>
#include <queue>
using namespace std;

struct node{
    node *lchild;
    int data;
    node *rchild;
}*root = NULL;

void insert(int key){
    node *p , *t , *r;
    t = root;

    if(root == NULL){
        p = new node;
        p->lchild = p->rchild = NULL;
        p->data = key;

        root = p;
        return;
    }

    while(t != NULL){
        r=t;

        if(t->data == key){
            return ;
        }

        else if(t->data < key){
            t = t->rchild ;
        }
        else{
            t = t->lchild ;
        }
    }

    p = new node ;
    p->lchild = p->rchild = NULL;
    p->data = key;

    if(key<r->data){
        r->lchild = p;
    }
    else{
        r->rchild = p;
    }
}

void display(node *x){
    if(x!=NULL){
        display(x->lchild);
        cout<<x->data<<"  ";
        display(x->rchild);
    }
}

void mirror_image(node *x){
    if(x!=NULL){
        mirror_image(x->rchild);
        cout<<x->data<<"  ";
        mirror_image(x->lchild);
    }
}

void level_order_traversal(){
    queue <node *> q;
    node *t = root;
    q.push(root);
    q.push(NULL);

    while(!(q.empty())){
        t = q.front();
        q.pop();

        if(t == NULL){
            cout<<endl;

            if( !(q.empty()) ){
                q.push(NULL);
            }
        }
        else{
            cout<<t->data<<" ";
            if(t->lchild != NULL){
                q.push(t->lchild);
            }

            if(t->rchild != NULL){
                q.push(t->rchild);
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

    cout<<"The elements of Binary search tree are : ";
    display(root);

    cout<<endl<<"The mirror image of Binary search tree are : ";
    mirror_image(root);

    cout<<endl<<"The level_order_traversal of Binary search tree are : \n";
    level_order_traversal();
    
    return 0;
}