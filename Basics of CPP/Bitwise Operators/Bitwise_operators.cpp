#include <iostream>
using namespace std;

int main()
{
    int a = 4, b = 6;  // 4 = 101 , 6 = 110

    cout << "a&b : " << (a & b) << endl;
    cout << "a|b : " << (a | b)<< endl;
    cout << "~b : " << (~b) << endl;
    cout << "a^b : " << (a ^ b) << endl;

    // left shift(<<) : The number will be multiplied by 2
    // Right shift(>>) : The number will be Divided by 2

    // Left shift
    cout << "(3<<2) : " << (3<<2) << endl;
    cout << "(5<<1) : " << (5<<1) << endl;

    // Right shift
    cout << "(20>>2) : " << (20>>2) << endl;
    cout << "(5>>1) : " << (5>>1) << endl;

    return 0;
}