#include <iostream>
#include <stdio.h>
using namespace std;

struct queue{
    int size;
    int front;
    int rear;
    int *arr;
};

int isFull(queue q){
    if(q.rear == q.size-1){
        return 1;
    }
    return 0;
}

int isEmpty(queue q){
    if(q.front == q.rear){
        return 1;
    }
    return 0; 
}

void create(queue *q){
    cout<<"Enter size : ";
    cin>>q->size;

    q->front = q->rear = -1;
    q->arr = new int[q->size];
}

void enqueue(queue *q , int key){

    if(q->rear == q->size-1){
        cout<<"Queue is full"<<endl;
    }

    else{
        q->rear++;
        q->arr[q->rear] = key;
    }
}

void dequeue(queue *q){
    int x = -1;

    if(q->front == q->rear){
        cout<<"Queue is empty"<<endl;
    }
    else{
        q->front++;
        x = q->arr[q->front];
        cout<<"Deleted element : "<<x<<endl;
    }
}

void display(queue q){

    cout<<"Elements are : ";
    for(int i = q.front+1 ; i<=q.rear ; i++){
        cout<<q.arr[i]<<"  ";
    }
    cout<<endl;
}


int main(){
    queue q;

    create(&q);
    enqueue(&q , 10);
    enqueue(&q , 20);
    enqueue(&q , 30);
    enqueue(&q , 40);
    enqueue(&q , 50);
    enqueue(&q , 60);

    display(q);

    dequeue(&q);
    dequeue(&q);

    display(q);
    return 0;
}
