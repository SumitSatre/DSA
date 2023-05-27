/* There are two methods two pass the function from the array */

#include <iostream>
#include <stdio.h>
using namespace std;

// Here for the both functions A[i] == *(A++)

void func1(int A[] , int n){
    cout<<"This is function 1 :"<<endl;
    for(int i=0 ; i<n ; i++){
        printf("%d \n",A[i]);
    }
}

void func2(int *A , int n){
    cout<<"This is function 2 :"<<endl;
    for(int i=0 ; i<n ; i++){
        printf("%d \n", *(A++));
    }
}

int main(){
    int marks[5];

    cout<<"Enter the numbers :"<<endl;
    for(int i=0 ; i<5 ; i++){
        cin>>marks[i];
    }

    int n;
    n = sizeof(marks) / sizeof(int);
    cout<<"The size of array is "<<n<<endl;

    func1(marks , n);
    func2(marks , n);

    return 0;
}