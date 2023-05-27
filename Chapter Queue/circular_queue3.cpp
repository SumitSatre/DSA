#include <iostream>
#include <stdio.h>
using namespace std;

struct queue{
    int size ;
    int front , rear;
    int *arr;

    queue(){
        cout<<"Enter size of queue : ";
        cin>>size;

        front = rear = 0;

        arr = new int[size];
    }

    void enqueue(int key){

        if((rear+1)%size == front){
            cout<<"Queue is full"<<endl;
        }
        else{
            rear = (rear+1)%size;
            arr[rear] = key;
        }
    }

    void dequeue(){
        int x = -1;

        if(front == rear){
            cout<<"Queue is empty"<<endl;
        }
        else{
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

        }while(i != (rear+1)%size);

        cout<<endl;
    }
};


int main(){
    queue q;

    q.enqueue(10);
    q.enqueue(20);
    q.enqueue(30);
    q.enqueue(40);
    q.enqueue(50);
    q.enqueue(60);

    q.display();

    q.dequeue();
    q.dequeue();

    q.display();

    q.enqueue(90);
    q.enqueue(100);

    q.display();
    return 0;
}