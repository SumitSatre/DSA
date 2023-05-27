#include <iostream>
#include <stdio.h>
using namespace std;

void find_unique(int *arr , int n){
    int result = 0;

    for(int i = 0 ; i<n ; i++ ){
        result = arr[i]^result;
    }
    // pahila pan je 2 unique number ahe tyancha result kadhala

    int check = 0 , k;
    int temp = result;

    for(k = 0 ; check!=1 ; k++){
        temp = temp>>1;
        check = temp & 1;
    }
    // nantr check kel ki tyanchya kontya position var 1 ahe
    // result madhe 1 ale mhanje ek element 1 ahe ani ek 0

    temp = result;

    // nantr tya array madhe check kel jya pan position la 1 ahe tya xor kel
    // separate kele jya madhe 1 ahe ani tyana xor kel 
    // mhanje apla result madhe ek element 1 ahe ani dusra 0 mag apan 1 walya sobat xor kel mhanje ek
    // element doghatla bhetla aplyala 
    for(int i = 0 ; i<n ; i++){
        int t = arr[i];

        t = t>>k;

        check = t & 1;
        
        if(check == 1){
            temp = arr[i]^temp;
        }
    }
    result = temp^result;
    
    cout<<"Unique element : "<<result<<" , "<<temp<<endl;
}

int main(){
    int arr[] = {2 ,7,3 ,2 ,5 ,5,4 ,4};

    find_unique(arr , 8);
    return 0;
}
