#include <iostream>
using namespace std;

struct stack{
    int size;
    int top;                                               
    int *arr;
};
                         
int isFull(stack st){
    if(st.top == st.size - 1){
        return 1;
    }
    return 0;
}

int isEmpty(stack st){
    if(st.top == -1){
        return 1;
    }
    return 0; 
}

void top(stack st){
    if(st.top == -1){
        cout<<"Stack Underflow"<<endl;
    }
    else{
        cout<<"Top element is : "<<st.arr[st.top]<<endl;
    }
}

void create(struct stack *st){
    cout<<"Enter Size : ";
    cin>>st->size;
    st->top = -1;                           // initialise the top value 

    st->arr = new int[st->size];
}

void push(stack *st , int element){
    if(st->top == st->size - 1){
        cout<<"Stack Overflow"<<endl;
    }

    else{
        st->top++;
        st->arr[st->top] = element;
    }
}

void pop(stack *st){
    int x = -1;

    if(st->top == -1){
        cout<<"Stack Underflow"<<endl;
    }

    else{
        x = st->arr[st->top];
        st->top--;
    }
    cout<<"Poped element : "<<x<<endl;
}

void Display(stack st){

    if(st.top == -1){
        cout<<"Stack Underflow"<<endl;
    }

    else{
        cout<<"Elements : ";
        for(int i = st.top ; i>=0 ; i--){
            cout<<st.arr[i]<<"  ";
        }
        cout<<endl;
    }
}

int main(){

    stack st;
    create(&st);
    push(&st , 10);
    push(&st , 20);
    push(&st , 30);
    push(&st , 40);
    push(&st , 50);
    push(&st , 60);
    
    Display(st);
    pop(&st);
    Display(st);

    top(st);
    return 0;
}
