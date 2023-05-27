// 0 1 1 2 3 5 8 13 21

#include <iostream>
#include <stdio.h>
using namespace std;

int fibonacci(int n){
    if(n== 0){
        return 0;
    }
    if(n==1){
        return 1;
    }

    int ans = fibonacci(n-1) + fibonacci(n-2);
    return ans;
}

int main(){
    int n;
    cout<<"Enter the number : ";
    cin>>n;

    int ans = fibonacci(n);
    cout<<ans;
    return 0;
}