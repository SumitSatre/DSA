#include <iostream>
#include <stdio.h>
using namespace std;

struct queue{
    int size;
    int front , rear ;
    int *arr;

    queue(){
        cout<<"Enter the size of queue : ";
        cin>>size;
        size++;

        front = rear = 0;

        arr = new int[size]; 
    }

    void enqueue(int key){
        if( (rear+1)%size == front){
            cout<<"queue is full"<<endl;
        }
        else{
            rear = (rear+1)%size;
            arr[rear] = key;
        }
    }

    void dequeue(){
        if( front == rear){
            cout<<"Queue is empty"<<endl;
        }
        else{
            int x = -1;
            front = (front+1)%size;
            x = arr[front];

            cout<<"Deleted element : "<<x<<endl;
        }
    }

    void display(){
        int i = front+1;

        cout<<"Elements are : ";

        do{
            cout<<arr[i]<<"  ";
            i = (i+1)%size;

        }while(i != (rear+1)%size );

        cout<<endl;
    }
};

int main(){
    queue q;

    q.enqueue(12);
    q.enqueue(2);
    q.enqueue(3);
    q.enqueue(56);
    q.enqueue(8);

    q.display();

    q.dequeue();
    q.dequeue();

    q.display();

    q.enqueue(5);
    q.enqueue(-3);

    q.display();
    return 0;
}