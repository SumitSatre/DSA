#include<iostream>
#include<conio.h>
using namespace std;
class Node
  {
    int d;
    Node *lp,*rp;
    friend class BST;
  };
class BST
  {
      Node *root;
    public:
      Node* getNode()
        {
           Node *n;
	       n=new Node;
	       n->lp=n->rp=NULL;
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
      void postOrder(Node *);   
      void mirror(Node *);   
      void leaf(Node *);   
      void depth(Node *,int);   
	        
//      Node* copy(Node *);
	  BST()
	    {
		   root=NULL;
		}
   };
int dt;
void BST :: insert(Node *r,Node *n)
  {
    while(1)
	  {
	    if(r->d > n->d)
		  {
		    if(r->lp==NULL)
			  {
			    r->lp=n;
				break;
			  }
			else
			  r=r->lp;  
		  }
		else
		  {
		    if(r->d < n->d)
			  {
			    if(r->rp==NULL)
				  {
				    r->rp=n;
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
void BST :: create()
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
void BST:: preOrder(Node *r)
  {
    if(r!=NULL)
	  {
	     cout<<r->d<<" ";
		 preOrder(r->lp);
		 preOrder(r->rp);
	  }
  }
void BST:: inOrder(Node *r)
  {
    if(r!=NULL)
	  {
   	     inOrder(r->lp);
		 cout<<r->d<<" ";
		 inOrder(r->rp);
	  }
  }
void BST:: postOrder(Node *r)
  {
    if(r!=NULL)
	  {
	   	 postOrder(r->lp);
		 postOrder(r->rp);
	     cout<<r->d<<" ";
	  }
  }
void BST:: mirror(Node *r)
  {
    Node *t;
    if(r!=NULL)
	  {
		 mirror(r->lp);
		 mirror(r->rp);
	   	 t=r->lp;
		 r->lp=r->rp;
		 r->rp=t;
	  }
  }
void BST:: leaf(Node *r)
  {
    if(r!=NULL)
	  {
	     if(r->lp==NULL && r->rp==NULL)
		   cout<<r->d<<" ";
	   	 leaf(r->lp);
		 leaf(r->rp);
	  }
  }
void BST:: depth(Node *r,int dn)
  {
    if(r!=NULL)
	  {
	     if(dn > dt)
		   dt=dn;
	   	 depth(r->lp,dn+1);
		 depth(r->rp,dn+1);
	  }
  }
int main()
  {
     int ch;
	 BST T;
	 do
	    {
		  cout<<"\n\n\t\tMenu\n\n\t1.Create\n\t2.Preorder\n\t3.Inorder\n\t4.Postorder\n\t5.Leaf\n\t6.Exit\n\n\t\tEnter Ch : ";
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
			     T.postOrder(T.getRoot());break;
			  case 5:
			     T.inOrder(T.getRoot());
				 cout<<" | ";
				 T.mirror(T.getRoot());
				 T.inOrder(T.getRoot());
				 T.mirror(T.getRoot());
				 	 	 	 	  
				 //dt=0;
				 //T.depth(T.getRoot(),1);
				 //cout<<"\nDepth Of Tree : "<<dt;
			     
				 //T.leaf(T.getRoot());
			     break;
			  case 6:
			     cout<<"\nComming Out !!!";break;
			  default:
			    cout<<"\nWrong Ch !!!";  
			}
		}while(ch!=6);
  return(0);
}