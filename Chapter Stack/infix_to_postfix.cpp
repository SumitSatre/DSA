#include <iostream>
#include <stdio.h>
#include <string.h>
using namespace std;

// Stack usng linked list

struct node{
    char data;
    node *next;
}*top = NULL;

void push(char x){
    node *t;
    t = new node;
    t->data = x;
    t->next = top;
    top=t;
}

char pop(){
    char x = -1;

    if(top == NULL){
        cout<<"stack is empty"<<endl;
    }
    else{
        node *t;
        t = top;
        x = t->data;
        top = top->next;
        delete t;
    }
    return x;
}

void Display(){
    node *t;
    t = top;

    while(t!=NULL){
        cout<<t->data<<"  ";
        t = t->next;
    }
    cout<<endl;
}

int pre(char x){
    if(x=='+' || x=='-')
        return 1;
    else if(x=='*' || x=='/')
        return 2;
    return 0;
}

int isOperand(char x){
    if(x=='+' || x=='-' || x=='*' || x=='/')
    return 0;
    else
    return 1;
}

char *InfixToPostfix(char *infix){
    push('#');
    char *postfix;
    int len = strlen(infix);
    postfix = new char[len+2];

    int i = 0 , j = 0;

    while(infix[i]!='\0'){

        if(isOperand(infix[i])){
            postfix[j++] = infix[i++];
        }
        else{
            if(pre(infix[i]) > pre(top->data)){
                push(infix[i++]);
            }
            else{
                postfix[j++] = pop();
            }
        }
    }

    while(top->data != '#'){
        postfix[j++] = pop();
    }

    postfix[j]='\0';
    return postfix;
}

int main(){
    char infix[] = "ab+c-ba-c+-";

    char *postfix=InfixToPostfix(infix);

    printf("%s ",postfix);
    return 0;
}

// + nantr * taku shakto pan * nantr + nahi taku shakat
// higher precedence nantr lower taku shakat nahi