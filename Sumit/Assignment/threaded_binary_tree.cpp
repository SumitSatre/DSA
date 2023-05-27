#include<iostream>
#include<conio.h>
using namespace std;
class Node
  {
    int d,lt,rt;
    Node *lp,*rp;
    friend class TBT;
  };

class TBT
  {
      Node *root;
    public:
      Node* getNode()
        {
           Node *n;
	       n=new Node;
	       n->lp=n->rp=NULL;
	       n->lt=n->rt=1;
		   cout<<"\nEnter Data : ";
           cin>>n->d;
		   return(n);   
        }
      void create();
      Node * getRoot()
        {
          return(root);
        }
      void insert(Node *,Node *);
      void inOrder(Node *);
      void preOrder(Node *);
      TBT()
	    {
		   root=NULL;
		}
   };
void TBT :: insert(Node *r,Node *n)
  {
    while(1)
	  {
	    //when new node attached, lp and rp of new node gets changed
	    if(r->d > n->d)
		  {
		    if(r->lt==1) //when new node attached to left of r, lp and lt of r gets changed
			  {
			    n->lp=r->lp;
				n->rp=r;
			    r->lp=n;
				r->lt=0;
				break;
			  }
			else
			  r=r->lp;  
		  }
		else
		  {
		    if(r->d < n->d)
			  {
			    if(r->rt==1)//when new node attached to right of r, rp and rt of r gets changed
				  {
				    n->lp=r;
					n->rp=r->rp;
					r->rp=n;
					r->rt=0;
					break;
				  }
				else
				  r=r->rp;  
			  } 
			else
			  {
			    cout<<"\nDuplicate Node !!!";
				delete(n);break;
			  }  
		  }   
	  }
  }
void TBT :: create()
  {
    int cont;
	Node *n;
	do
	  {
	    n=getNode();
		if(root==NULL)
		  root=n;
		else
		  insert(root,n);     
		cout<<"\nContinue (1 : Yes) : ";
		cin>>cont;  
	  }while(cont==1);
  }
void TBT:: preOrder(Node *r)
  {
    int flag=0;
	while(r!=NULL)
	  {
	    while(r->lt==0 && flag ==0)
		  {
		    cout<<r->d<<" ";
			r=r->lp;
		  }	   
		if(flag==0)
		  cout<<r->d<<" ";
		if(r->rt==0)
		  { 
		    r=r->rp;
			flag=0;
		  }
		else
		  {
		    r=r->rp;
			flag=1;
		  }    
	  }
  
  }
void TBT:: inOrder(Node *r)
  {
    int flag=0;
	while(r!=NULL)
	  {
	    while(r->lt==0 && flag ==0)
		  r=r->lp;
		cout<<r->d<<" ";
		if(r->rt==0)
		  { 
		    r=r->rp;
			flag=0;
		  }
		else
		  {
		    r=r->rp;
			flag=1;
		  }    
	  }
  }
int main()
  {
     int ch;
	 TBT T;
	 do
	    {
		  cout<<"\n\n\t\tMenu\n\n\t1.Create\n\t2.Preorder\n\t3.Inorder\n\t4.Exit\n\n\t\tEnter Ch : ";
		  cin>>ch;
		  switch(ch)
		    {
			  case 1:
			     T.create();break;
			  case 2:
			     T.preOrder(T.getRoot());break;
			  case 3:
			     T.inOrder(T.getRoot());break;
			  case 4:
			     cout<<"\nComming Out !!!";break;
			  default:
			    cout<<"\nWrong Ch !!!";  
			}
		}while(ch!=4);
  return(0);
}