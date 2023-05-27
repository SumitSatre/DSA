#include <iostream>
#include <string.h>
using namespace std;

struct node{
    char data;
    struct node *next;
}*top = NULL;

void push(int element){
    
    node *t;
    t = new node;
    t->data = element ;
    t->next = top;
    top = t;
}

char pop(){
    char x = -1;
    node *t;

    if(top == NULL){
        cout<<"Stack Underflow"<<endl;
    }
    else{
        t = top;
        top = top->next;
        x = t->data;
        delete t;
    }
    return x;
}

void Display(){
    node *p;
    p = top;
    
    cout<<"Elements : ";

    while(p!=NULL){
        cout<<p->data<<"  ";
        p = p->next;
    }
    cout<<endl;
    
}

int operand(char ch){
    if(ch == '*' || ch == '/' || ch == '+' || ch == '-'){
        return 0;
    }
    return 1;
}

int pre(char ch){
    if(ch == '*' || ch == '/'){
        return 2;
    }
    else if(ch == '+' || ch == '-'){
        return 1;
    }
    return 0;
}

char* Infix_to_postfix(char* infix){
    int len = strlen(infix);
    char *postfix;

    postfix = new char[len+2];

    push('#');
    int i = 0 , j = 0;

    while(infix[i] != '\0'){
        if(operand(infix[i])){
            postfix[j++] = infix[i++];
        }
        else{
            if(pre(infix[i]) > pre(top->data) ){
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

char* Infix_to_prefix(char* inf){
    char *infix = strrev(inf);

    int len = strlen(infix);
    char *postfix;

    postfix = new char[len+2];

    push('#');
    int i = 0 , j = 0;

    while(infix[i] != '\0'){
        if(operand(infix[i])){
            postfix[j++] = infix[i++];
        }
        else{
            if(pre(infix[i]) > pre(top->data) || pre(infix[i]) == pre(top->data) ){
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

    return strrev(postfix);

}



int main(){
    char infix[] = "a+b*c-d";

    char *postfix = Infix_to_postfix(infix);

    cout<<postfix<<endl;

    char *prefix = Infix_to_prefix(infix);

    cout<<prefix<<endl;
    
    return 0;
}

