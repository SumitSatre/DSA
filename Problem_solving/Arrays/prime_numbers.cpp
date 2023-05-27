#include <iostream>
#include <stdio.h>
using namespace std;

int main(){
    int n = 1000;
    int *isprime = new int[n];
    int count = 0;
    fill_n(isprime , n , 1);

    isprime[0] = isprime[1] = 0;

    for(int i = 2 ; i<n ; i++){
        if(isprime[i]!=0){
            count++;

            for(int j = 2 * i ; j<n ; j=j+i){
                isprime[j]=0;
            }
        }
    }

    cout<<count<<endl;
    return 0;
}