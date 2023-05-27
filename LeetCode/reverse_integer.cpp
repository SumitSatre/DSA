#include <iostream>
#include <math.h>
using namespace std;

int main(){
    int x;
    cout<<"Enter the Number : ";
    cin>>x;

    int k = 0 , ans = 0;

    while(x != 0){
        k = x % 10;

        if(ans > INT_MAX/10 || ans < INT_MIN/10){
            cout<<"Ended"<<endl;
            return 0;
        }
    
        ans = (ans * 10) + k;
        x = x /10;
    }
    
    cout<<ans<<endl;

    return 0;
}