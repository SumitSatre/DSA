#include<iostream>
#include<stdio.h>
#include<conio.h>
#include<process.h>
using namespace std;

class Node{
	public:
		int data;
		Node*next;
		
		
		Node(){
			data=0;
			next=NULL;
			
		}
};
class Stack{
	Node*top;
	public:
		
	Stack(){
		top=NULL;
	
}
	void push(int data);
	void pop();
	void peep();
	int isEmpty();
	void display();
	
	
};

int count;
int Stack::isEmpty() {
	if (top==NULL){
		return 1;
	}else{
		return 0;
	}
}

 void Stack::push(int data){
 	Node*temp;
 	temp= new Node();
 	temp->data=data;
 	
 	if(isEmpty()==1){
 		top=temp;
 		count++;
 	}else{
 		temp->next=top;
 		top=temp;
 		count++;
 		
	 }
	 }
 
void Stack::pop(){
	if (isEmpty()==1){
		cout<<"\nSORRY :Stack is Empty";
		return;
		
	}
	Node*temp;
	temp=top;
	cout<<"\nElement Poped is: "<<temp->data;
	top=top->next;
	delete(temp);
	count--;
}

void Stack::peep(){
	if(isEmpty()==1){
		cout<<"\nSORRY :Stack Empty";
		return;
	}
	cout<<"\nElement at top is:."<<top->data;
}
void Stack::display(){
	cout<<"\nStack has"<<count<<"Elements";
	
	if(isEmpty()==1){
		cout<<"\nSORRY :Stack Empty";
		return;
	}
	cout<<"\nStack is :"<<endl;
	
	Node*temp1;
	
	temp1 = top;
	cout<<"Top-->";
	
	while(temp1!=NULL){
		cout<<"\t"<<temp1->data<<endl;
		temp1=temp1->next;
		
	}
	
}
int main(){
	int choice;
	char ch;
	int data;
	Stack st;
do{
	cout<<"\nStack Operation\n\n1.Push\n2.Pop\n3.Peep\n4.Display\n5.Exit\Enter ur choice: ";
	cin>>choice;
switch(choice){
	case 1:
		cout<<"\nEnter data: ";
		cin>>data;
		st.push(data);
		break;
		
	case 2:
		st.pop();
		break;
	case 3:
		st.peep();
		break;
	case 4:
		st.display();
		break;
	case 5:
		exit(0);
		
	default:
		cout<<"Dear plz enter valid choice: ";
		
}
cout<<"\nContinue(y/n):";
ch=getche();
}while(ch=='y'|ch=='Y');
return 0;
}