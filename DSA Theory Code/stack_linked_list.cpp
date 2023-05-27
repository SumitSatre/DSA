#include <iostream>
#include <stdio.h>
using namespace std;

struct node{
    int data;
    node *next;

    node(int key){
        data = key;
        next = NULL;
    }
};

struct stack{
    node *top = NULL;

    void push(int key){
        node *t = new node(key);
        t->next = top;
        top = t;
    }

    void pop(){
        if(top == NULL){
            return;
        }
        else{
            node *t = top;
            top = top->next;
            delete t;
        }
    }

    void Display(){
        node *t = top;
        cout<<"Elements are : ";
        while(t!=NULL){
            cout<< t->data <<"  ";
            t = t->next;
        }
        cout<<endl;
    }
};


int main(){
    stack st;

    st.push(10);
    st.push(20);
    st.push(30);
    st.push(40);
    st.push(50);
    st.push(60);
    
    st.Display();
    st.pop();
    st.Display();
    st.pop();
    st.pop();
    st.pop();
    st.Display();

    return 0;
}