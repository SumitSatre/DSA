#include <iostream>
using namespace std;

struct student_data{
    string name;
    int roll_no ;
    float sgpa ;
};

class Student{
    public :

    student_data s[5];

    void input(){

        for(int i = 0 ; i<5 ; i++){
            cout<<"Enter the data of student "<<i+1<<" : "<<endl;

            cout<<"Enter the name of student "<<i+1<<" : ";
            cin>>s[i].name;

            cout<<"Enter the roll number of student "<<i+1<<" : ";
            cin>>s[i].roll_no;

            cout<<"Enter the sgpa of student "<<i+1<<" : ";
            cin>>s[i].sgpa;
            
            cout<<endl;
        }
        cout<<"***** Entered data successfully *****"<<endl<<endl;
    }

    void display(){
        for(int i = 0 ; i<5 ; i++){
            cout<<"The data of student "<<i+1<<" : "<<endl;

            cout<<"The name of student "<<i+1<<" : "<<s[i].name<<endl;
            cout<<"The roll number  of student "<<i+1<<" : "<<s[i].roll_no<<endl;
            cout<<"The sgpa of student "<<i+1<<" : "<<s[i].sgpa<<endl;

            cout<<endl;
        }
    }
    // 1st chit
    void Bubble_sort(){
        int n = 5;

        for(int i = 1 ; i<n ; i++){
            for(int j = 0 ; j<(n-i) ; j++){
                if(s[j].roll_no > s[j+1].roll_no){
                    swap(s[j] , s[j+1]);
                }
            }
        }
    }

    void BinarySearch_name(){
        int size = 5 , flag = 0  ;
        string key = "sumit";

        int start = 0;
        int end = size -1;
        int mid = (start + end) / 2;

        while(start<=end){

            int result = -1000;

            if(s[mid].name == key){
                result = 0;
            }

            if(result == 0){
                cout<<"The data is present in database"<<endl;
                flag = 1;
                break;
            }

            else if(s[mid].name > key){
                cout<<(s[mid].name > key)<<endl;
                start = mid + 1;
            }

            else{
                end = mid - 1;
            }

            mid = (start + end) / 2;
        }
        
        if(flag == 0){
            cout<<"The entered name is not found in database"<<endl;
        }
    }

    void linear_search(){
        cout<<"Enter the sgpa student : ";
        int sgpa;
        cin>>sgpa;

        for(int i = 0 ; i<5 ; i++){

            if(s[i].sgpa == sgpa){
                cout<<"The data of student "<<i+1<<" : "<<endl;

                cout<<"The name of student "<<i+1<<" : "<<s[i].name<<endl;
                cout<<"The roll number  of student "<<i+1<<" : "<<s[i].roll_no<<endl;
                cout<<"The sgpa of student "<<i+1<<" : "<<s[i].sgpa<<endl;
            }

            cout<<endl;
        }
    }

    void BinarySearch(){
        int size = 5 , flag = 0 ;
        int key;

        cout<<"Enter the roll number to find : ";
        cin>>key;

        int start = 0;
        int end = size -1;
        int mid = (start + end) / 2;

        while(start<=end){
            if(s[mid].roll_no == key){
                cout<<"The data of student "<<mid+1<<" : "<<endl;

                cout<<"The name of student "<<mid+1<<" : "<<s[mid].name<<endl;
                cout<<"The roll number  of student "<<mid+1<<" : "<<s[mid].roll_no<<endl;
                cout<<"The sgpa of student "<<mid+1<<" : "<<s[mid].sgpa<<endl;
                flag = 1;
                break;
            }

            if(s[mid].roll_no < key){
                start = mid + 1;
            }

            if(s[mid].roll_no > key){
                end = mid - 1;
            }

            mid = (start + end) / 2;
        }
        
        if(flag == 0){
            cout<<"The entered name is not found in database"<<endl;
        }
    }

    void insertion_sort(int *arr , int size){
        for(int i = 1 ; i<size ; i++){
            int temp = arr[i] ;
            int j = i-1 ;
    
            for( ; j>=0 ; j--){
                if(arr[j]>temp){
                    // shift
                    arr[j+1] = arr[j];
                }
    
                else{
                    break;
                }
            }
            arr[j+1] = temp;
        }
        }
};



int main(){
    Student Stei;
    Stei.input();
    Stei.Bubble_sort();
    Stei.display();

    Stei.BinarySearch_name();
    return 0;
}
