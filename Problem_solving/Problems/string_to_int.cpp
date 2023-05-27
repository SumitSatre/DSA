#include <iostream>
#include <math.h>
using namespace std;

int myAtoi(string s) {
        int i = 0 , ans = 0 , x = 0 , j = 0;
        char h;
        while(j<s.length()){
            if(48 <= s.at(i) <= 57){
                h = s.at(i);
                x = int(h) - 48;
                ans = (ans * pow(10,i)) + x;
                i++;
            }
            j++;
        }
        return ans;
}

int main(){
    string s = "159";
    int ans = myAtoi(s);
    cout<<"Answer : "<<ans<<endl;
    return 0;
}