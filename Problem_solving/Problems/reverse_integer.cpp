#include <iostream>
#include <math.h>
using namespace std;

int main(){
    int n;
    cout<<"Enter number : ";
    cin>>n;
    int ans = 0 , i = 0 , x = 0 ;

    while(n!=0){
        x = n % 10;

        ans = (ans * 10) + x;
        n = n/10;
        i++;
    }
    cout<<"Answer : "<<ans<<endl;
    return 0;
}