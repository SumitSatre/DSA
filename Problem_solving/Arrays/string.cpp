#include <iostream>
#include <string>
using namespace std;

int main(){
    cout<<"Enter Your name : ";
    string name;

    // cin>>name;     // After space it can not take the input 
    getline(cin , name);
    cout<<"My name is "<<name<<endl;
    cout<<name.at(0)<<endl;
    cout<<name.at(1)<<endl;
    cout<<name.at(2)<<endl;
    cout<<name.at(3)<<endl;
    cout<<name.at(4)<<endl;
    return 0;
}