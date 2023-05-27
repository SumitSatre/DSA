#include <iostream>
#include <stdio.h>
using namespace std;

struct Queue{
    int size;
    int front;
    int rear;
    int *arr;
};

class class_queue{
    public:

    // constructor to create the class
    class_queue(Queue *q){
        cout<<"Enter size : ";
        cin>>q->size;

        q->front = -1;
        q->rear = -1;

        q->arr = new int[q->size];
    }

    void enqueue(Queue *q , int element){

        if(q->rear == q->size-1){
            cout<<"Queue is full"<<endl;
        }
        else{
            q->rear++;
            q->arr[q->rear] = element;
        }
    }

    void dequeue(Queue *q){
        int x = -1;

        if(q->front == q->rear){
            cout<<"Queue is Empty"<<endl;
        }

        else{
            int x = q->arr[q->front+1];
            q->front++;
            cout<<"Deleted element : "<<x<<endl;
        }
    }

    void isFull(Queue q){
        if(q.rear == q.size-1){
            cout<<"Queue is full"<<endl;
        }
    }

    void isEmpty(Queue q){
        if(q.front == q.rear){
            cout<<"Queue is Empty"<<endl;
        }
    }

    void display(Queue q){

        cout<<"Elements are : ";
        for(int i = q.front+1 ; i<=q.rear ; i++){
            cout<<q.arr[i]<<"  ";
        }
        cout<<endl;
    }
};


int main(){
    Queue q;   // structure created

    class_queue a(&q);   // creating class
 
    a.enqueue(&q , 10);
    a.enqueue(&q , 20);
    a.enqueue(&q , 30);
    a.enqueue(&q , 40);
    a.enqueue(&q , 50);
    a.enqueue(&q , 60);

    a.display(q);

    a.dequeue(&q);
    a.dequeue(&q);

    a.display(q);
    a.isFull(q);
    return 0;
}