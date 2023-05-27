#include <iostream>
using namespace std;

struct stack{
	int size;
	int top;
	int *arr;
};

void create(stack *st){
	cout<<"Enter size : ";
	cin>>st->size;

	st->top = -1;
	st->arr = new int[st->size];
}

void push(stack *st , int x){
	if(st->top == st->size -1 ){
		cout<<"stack is full"<<endl;
	}
	else{
		st->arr[++st->top] = x;
	}
}

void pop(stack*st){
	if(st->top == -1){
		cout<<"stack is empty"<<endl;
	}
	else{
		int x = -1;
		x = st->arr[st->top];
		st->top--;

		cout<<"Poped element : "<<x<<endl;
	}
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
	return 0;
}