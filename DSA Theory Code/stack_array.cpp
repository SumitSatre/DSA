#include <iostream>
#include <stdio.h>
using namespace std;

struct stack{
    int size;
    int *arr;
    int top;

    stack(int size){
        this->size = size;
        top = -1;

        arr = new int[this->size];
    }

    void push(int key){
        if(top == size-1){
            return;
        }
        else{
            arr[++top] = key;
        }
    }

    void pop(){
        if(top == -1){
            return;
        }
        else{
            top--;
        }
    }

    void Display(){
        cout<<"Elements are : ";
        for(int i = 0 ; i<=top ; i++){
            cout<<arr[i] <<"  ";
        }
        cout<<endl;
    }
};


int main(){
    stack st(10);

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