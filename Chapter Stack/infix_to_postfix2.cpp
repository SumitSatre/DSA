#include <iostream>
#include <stdio.h>
#include <string.h>
using namespace std;

struct node{
    char data;
    node *next;
}*top = NULL;

void push(char x){
    node *t = new node;
    t->data = x;
    t->next = top;
    top = t;
}

char pop(){
    char x = -1;
    if(top == NULL){
        return x;
    }
    else{
        node *t = new node;
        t = top;
        x  = t->data;
        top = top->next;
        delete t;
    }
    return x;
}

int isOperand(char x){
    if(x == '*' || x == '/' || x == '+' || x == '-'){
        return 0;
    }
    return 1;
}

int pre(char x){
    if(x == '+' || x == '-'){
        return 1;
    }
    else if(x == '*' || x == '/' ){
        return 2;
    } 
    return 0;
}

char* InfixtoPostfix(char *infix){
    int len = strlen(infix); 
    char *postfix = new char[len+2];
    int i = 0 , j = 0;

    while(infix[i] != '\0'){

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
    postfix[j] = '\0';

    return postfix;
}


int main(){
    char infix[] = "ab+c-ba-c+-";
    push('#');

    char *postfix=InfixtoPostfix(infix);

    printf("%s ",postfix);
    return 0;
}