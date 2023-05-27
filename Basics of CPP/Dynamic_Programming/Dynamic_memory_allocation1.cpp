#include <iostream>
using namespace std;

int main(){
    int a = 12;
    int *ptr = &a;

    cout << "The value of a is " << *ptr << endl;

    int* p = new int(20);
    float* b = new float(3.0);

    cout << "The value of p is " << *p << endl;
    cout << "The value of b is " << *b << endl;
    cout << "The address of b is " <<  b << endl;// It gives the address of floating point number 3.0 
                                                    //  which is stored in b
    cout << "The value of &b is " << &b << endl << endl;    // It gives the address of float b 

    int *arr = new int[3];
    arr[0] = 10;
    arr[1] = 20;
    arr[2] = 30;

    cout << "The value of arr[0] is " << arr[0] << endl;
    cout << "The value of arr[1] is " << arr[1] << endl;
    cout << "The value of arr[2] is " << arr[2] << endl<< endl;

    cout << "The value of arr is " << arr << endl;
    cout << "The value of &arr[0] is " << &arr[0] << endl<< endl;
    // arr = &arr[0]

    cout << "The value of (arr+1) is " << (arr+1) << endl;
    cout << "The value of &arr[1] is " << &arr[1] << endl<< endl;
    // (arr+1) = &arr[1]


    cout << "The value of arr[0] is " << arr[0] << endl;
    cout << "The value of arr[1] is " << arr[1] << endl;
    cout << "The value of arr[2] is " << arr[2] << endl << endl;

    cout << "The value of *arr is " << *arr << endl;
    cout << "The value of *(arr+1) is " << *(arr+1) << endl;
    cout << "The value of *(arr+2) is " << *(arr+2) << endl << endl;


    delete[] arr;      // After deleting it gives the garbage 

    cout << "The value of arr[0] is " << arr[0] << endl;
    cout << "The value of arr[1] is " << arr[1] << endl;
    cout << "The value of arr[2] is " << arr[2] << endl << endl;
    return 0;
}
