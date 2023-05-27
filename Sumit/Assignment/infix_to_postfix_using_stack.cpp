#include<iostream>
#include<stdio.h>
#include<conio.h>
#include<process.h>
#define MAX 30
using namespace std;

void push(char c);
char pop();
int isEmpty();
int isFull();

char stack[MAX];
int top=-1;
char infix[MAX];
char postfix[MAX];

void intopost();
int precedance(char ch);

void main(){
	cout<<"\nEntered infix expression is: ";
	int i=0;
	while(infix[i]!='\0'){
		cout<<infix[i];
		i++;
	}
	intopost();
	cout<<"\nconverted podtfix expression is:"
	i=0;
	while(postfix[i]!='\0'){
		cout<<postfic[i];
		i++;
		
	}
	getche();
	
}
void intopost(){
	 int i;
	 char sysmbol;
	 int j=0;
	 for(i=0;infix[i]!='\0';i++){
	 	sysmbol=infix[i];
	 	switch(sysmbol){
	 		
	 	case'(':
	 		     push(sysmbol);
	 		     break;
	 	case')':
	 		     char ch;
	 		     ch=pop();
	 		     while(ch!='('){
	 		     	postfix[j]=ch;
	 		     	j++;
	 		     	ch=pop();
	  }
	 		     	break;
	 		     	case'^':
	 		     	case'*':
	 		     	case'/':
					case'+':
					case'-':
					
					while(isEmpty()==0&&(precedence(sysmbol))<=precedence(stack[top])){
						postfix[j++]=pop();
						
					}	
					push(sysmbol);
					    break;
						
					default:
					        postfix[j++]=sysmbol;
				
		 }
	 }
	 while(isEmpty()!=1){
	 	postfix[j++]=pop();
	 	
	 }
}

   int precedence(char ch){
   	switch(ch){
   		case '^':
   			      return 3;
   			      
   		case '*':
   	    case '/':    
   		         return 2;
   			    
   		case '+':
   		case '-': 
   		           return 1;
   		default:
   			     return 0;
   			     
	   }
   }
   void push(char ch){
   	if(isFull()==1){
   		cout<<"\nstack full";
   		getch();
   		return;
   		
	   }
	   return stack[top--];
   }
   int isEmpty(){
   	if(top==-1){
   		return 1;
   	}else{
   		return 0;
	   }
	   }
	   int isFull(){
	   	if(top==MAX-1){
	   		return 1;
	   	}else{
	   		return 0;
		}
		}