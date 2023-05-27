#include <iostream>
#include <math.h>
using namespace std;

int main(){
    int n  ;
    cout<<"Enter the decimal number : ";
    cin>>n;

    int ans = 0;
    int i = 0;

    while(n!=0){
        int bit = n & 1;
        ans = (bit*pow(10,i)) + ans;
        n = n / 2 ;

        i++;
    }
    cout<<"Answer : "<<ans<<endl;;
    return 0;
}