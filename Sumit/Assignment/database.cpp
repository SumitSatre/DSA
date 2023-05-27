
#include<iostream>
using namespace std;
#define n 3
struct Se
{
    int roll_no;
    float sgpa;
    string name;
};

class Student
{
public:
struct Se S[n];
void input()
{  
    for (int  i =0; i <n; i++)
  {
      cout<<"Enter the Name of the Student: "<<" "<<endl;
      cin>>S[i].name;
      
      cout<<"Enter the rollno of the student: "<<" "<<endl;
      cin>>S[i].roll_no;
      
      cout<<"Enter the sgpa of the  student: "<<" "<<endl;
      cin>>S[i].sgpa;  
  }
  cout<<endl;
}
void display()
{ 
    cout<<"Database of the student ....."<<endl;
  
   cout<<"Roll_no\tName\tSgpa"<<endl;
  for (int  i = 0; i <n; i++)
  {
      cout<<S[i].roll_no<<"\t";
      cout<<S[i].name<<"\t";
      cout<<S[i].sgpa<<"\t"; 
      cout<<endl; 
  }
   cout<<endl;
  }
void searchroll_no()
{
    int key;
  cout<<"Which roll no. do you want to find in the list? :"<<endl;
  cin>>key;
  for (int i=0;i<n;i++)
  {
    if(key==S[i].roll_no){ 
       cout<<"The roll no. is present"<<endl;
        cout<<"Your Roll no. to be searched is :"<<S[i].roll_no<<endl;
            cout<<"Name of Roll no is :"<<S[i].name<<endl;
            cout<<"Sgpa of Roll no :"<<S[i].sgpa<<endl;
       return;     
    }
  }cout<<"THe roll no. is not present"<<endl;
}
void searchsgpa()
{ 
  float key;
  cout<<"Enter the sgpa  that u want to search in the list: "<<endl;
  cin>>key;
  S[n];
  for (int i=0;i<n;i++)
  {
    if(key==S[i].sgpa){
       cout<<"THE sgpa is present"<<endl;
        cout<<"Your SGPA to be searched is :"<<S[i].sgpa<<endl;
            cout<<"Name of SGPA is :"<<S[i].name<<endl;
            cout<<"Roll No. of SGPA :"<<S[i].roll_no<<endl;
       return;     
    }
  }cout<<"SGPA not present"<<endl;
}
void searchname()
{ 
  string key;
  cout<<"Enter the name of student you want to search in database: "<<endl;
  cin>>key;
  S[n];
  for (int i=0;i<n;i++)
  {
    if(key==S[i].name){
       cout<<"The name is present"<<endl;
       cout<<"Your Name search is :"<<S[i].name<<endl;
            cout<<"Roll No. of  Name :"<<S[i].roll_no<<endl;
            cout<<"SGPA of Name "<<S[i].sgpa<<endl;
       return;     
    }
  }
  cout<<"Key not present"<<endl;
}
void bubblesortrollno(){  
    cout<<"Your sorted  student list according to the roll no  is ------"<<endl;

  for(int i=0;i<n;i++){
     for(int j=0;j<n-i;j++)
    {
      if(S[j].roll_no>S[j+1].roll_no)
      {
          struct Se t=S[j];
          S[j]=S[j+1];
          S[j+1]=t;
      }
    }  
  } 
  for(int i=0;i<n;i++)
  {
    cout<<S[i].roll_no<<"\t"<<S[i].name<<"\t"<<S[i].sgpa<<"\t"<<endl;
  }
}
void bubblesgpa()
  {  
    cout<<"Your sorted  student list according to the roll no  is ------"<<endl;
     for(int i=0;i<n;i++){
     for(int j=0;j<n-i;j++)
    {
      if(S[j].sgpa>S[j+1].sgpa)
      {
          struct Se t=S[j];
          S[j]=S[j+1];
          S[j+1]=t;
      }
    } 
  } 
  for(int i=0;i<n;i++)
  {
    cout<<S[i].roll_no<<"\t"<<S[i].name<<"\t"<<S[i].sgpa<<"\t"<<endl;
  }
}
//----Binary search------
void binearysearch_rollno()
{
  int low=0;
  int high=n;
  int key;
  cout<<"enter the key: "<<endl;
  cin>>key;
  while(low<=high)
  { 
    int mid=(low+high)/2;
    if(S[mid].roll_no==key)
    {
      cout<<"The key roll no  is present"<<endl;
      return ;
    }
    else if(S[mid].roll_no<key)
    {
      low=mid+1;
    }
    else{
      high=mid-1;
    }
  }
  cout<<"the key roll no is not present"<<endl;
}
void sortsgpa()
  {
      int count=1;

  while(count<n)
  {
    for(int i=0;i<n-count;i++)
    {
      if(S[i].sgpa>S[i+1].sgpa)
      {
          struct Se t=S[i];
          S[i]=S[i+1];
          S[i+1]=t;
      }
    }count++;
  }
  for(int i=0;i<n;i++)
  {
    cout<<"Roll_no\tName\tSgpa"<<endl;
    cout<<S[i].roll_no<<"\t"<<S[i].name<<"\t"<<S[i].sgpa<<"\t"<<endl;
  }
   cout<<endl;
}
void insertionsort()
{
  for(int  i=1;i<n;i++){
       //struct  Se crr=S[i];
       struct Se c=S[i];
       int curr=S[i].roll_no;
         int j=i-1;
    while(S[j].roll_no>curr && j>=0)
    {
        S[j+1]=S[j];
        j--;
    }
  S[j+1]=c;
}
  cout<<"Roll_no\tName\tSgpa"<<endl;
  for(int i=0;i<n;i++)
  {  
    cout<<S[i].roll_no<<"\t"<<S[i].name<<"\t"<<S[i].sgpa<<"\t"<<endl;
  }
   cout<<endl;
}
//quicksort------------
int partition(struct Se S[],int low,int high)
{
  int pivot =S[low].sgpa;
  int cnt=0;
  for(int i=low+1;i<=high;i++)
  {
    if(S[i].sgpa<=pivot)
    {
      cnt++;
    }
  }
  int pivotindex=low+cnt;                        
swap(S[pivotindex],S[low]);
//sorting left and right parts
    int i=low;int j=high;
    while(i<pivotindex && j>pivotindex )
    {
        while(S[i].sgpa<pivot)
        {
            i++;
        }
        while(S[j].sgpa>pivot)
        {
            j--;
        }
        if(i<pivotindex && j>pivotindex )
        {
            swap(S[i++].sgpa,S[j--].sgpa);
        } 
    }
     return pivotindex;
}
void quicksort(struct Se S[],int low,int high)
{
if(low>=high)
{
  return;
}
int p=partition(S,low,high);
quicksort(S,low,p-1);
quicksort(S,p+1,high);
  for(int i=0;i<n;i++)
  {
    cout<<S[i].roll_no<<"\t"<<S[i].name<<"\t"<<S[i].sgpa<<"\t"<<endl;
  }

}
};


int main()
{
  Student stud;
bool go=true;
while(go)
{
  cout<<"**Welcome to the Student Database***"<<endl;
 cout<<"1.Press 1 to input the details"<<endl;
 //cout<<"2.display"<<endl;
 cout<<"2. Press 2 to search by roll no"<<endl;
 cout<<"3. Press 3 to search by sgpa"<<endl;
 cout<<"4. Press 4 to search by name"<<endl;
 cout<<"5. Press 5 to bubble sort using Roll"<<endl;
 cout<<"6. Press 6 to bubble sort using sgpa"<<endl;

 cout<<"7. Press 7 to Bineary search"<<endl;
 cout<<"8. Press 8 to insertionsort"<<endl;
 cout<<"9. Press 9 to quicksort"<<endl;
 cout<<"10.Press 10 to Exit"<<endl;
 int no;
 cout<<"Enter the option number "<<endl;
 cin>>no;
 switch(no)
 {
  case 1: stud.input();
  stud.display();
   break;
   
   case 2: stud.searchroll_no();
   break;
   case 3: stud.searchsgpa();
   break;

   case 4: stud.searchname();
   break;

  case 5: stud.bubblesortrollno();
  break;
  case 6: stud.bubblesgpa();
  break;

  case 7: stud.binearysearch_rollno();
  break;
 
  case 8: stud.insertionsort();
  break;
  case 9: stud.quicksort(stud.S,0,n-1);
   stud.display();
  break;
   case 10: go=false;
  cout<<"Program executed successfully"<<endl;
  break;

  default: cout<<"please enter the proper no:"<<endl; 
  break;
 }
  cout<<"---------Thank you---------"<<endl;
}
   return 0;
}
