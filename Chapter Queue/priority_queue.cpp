#include <iostream>
#include <stdio.h>
using namespace std;

struct Queue{
    int size;
    int front;
    int rear;
    int *arr;
};

void bubble_sort(int *arr , int n){
    for(int i = 1  ; i<n ; i++){
        
        for(int j = 0 ; j<(n-i) ; j++){
        
            if(arr[j] < arr[j+1]){
                swap(arr[j] , arr[j+1]);
            }
        }

    } 
}
void create(Queue *q){
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


int main(){
    Queue q;
    
    create(&q);

    enqueue(&q , 10);
    enqueue(&q , 20);
    enqueue(&q , 90);
    enqueue(&q , 40);
    enqueue(&q , 50);
    enqueue(&q , 60);
    bubble_sort(q.arr , q.size);

    display(q);

    dequeue(&q);
    dequeue(&q);

    display(q);
    return 0;
}
// highest priority will be deleted first
