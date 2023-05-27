#include <iostream>
#include <stdio.h>
using namespace std;

void func(int n)
{
    static int k = 0;
    if (n == 0)
    {
        return;
    }
    else
    {
        k++;
        func(n - 1);
        cout << n << endl;  
        cout << k << endl;
    }
}

int main()
{
    int n;
    cout << "Enter the num : ";
    cin >> n;
    func(n);
    return 0;
}