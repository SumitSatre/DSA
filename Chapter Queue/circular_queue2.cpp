// 1 jaga apan blank sodat ahe

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
    if((q.rear+1)%q.size == q.front){     // change
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

    q->front = q->rear = 0;                        // change
    q->arr = new int[q->size];
}

void enqueue(queue *q , int key){

    if((q->rear+1)%q->size == q->front){           // change
        cout<<"Queue is full"<<endl;
    }

    else{
        q->rear = (q->rear+1)%q->size;             // change
        q->arr[q->rear] = key;
    }
}

void dequeue(queue *q){
    int x = -1;

    if(q->front == q->rear){
        cout<<"Queue is empty"<<endl;
    }
    else{
        q->front = (q->front+1)%q->size;            // change
        x = q->arr[q->front];
        cout<<"Deleted element : "<<x<<endl;
    }
}

void display(queue q){

    int i=q.front+1;                               // change all

    cout<<"Elements are : ";
    
    do{
    printf("%d ",q.arr[i]);
    i=(i+1)%q.size;
    }while(i!=(q.rear+1)%q.size);

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

    enqueue(&q , 90);
    enqueue(&q , 100);

    display(q);
    return 0;
}
