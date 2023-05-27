#include <iostream>
#include <stdio.h>
using namespace std;

void say_digit(int n , string *arr){

    // Base condition
    if(n==0){
        return;
    }
    
    int digit = n%10;

    // recursive relation
    say_digit(n/10 , arr);
    
    cout<<arr[digit]<<" ";
}

int main(){
    string arr[10] = {"Zero","One","Two","Three","Four","Five","Six","Seven","Eight","Nine"};
    int n  = 412;
    say_digit(412 , arr);

    return 0;
}