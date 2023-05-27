#include <iostream>
#include <stdio.h>
using namespace std;

int main(){
    int a[] = {5,1,15,20,25};
    int i, j, k;
    i = ++a[1];
    j = a[1]++;
    k = a[i++];
cout << i << " " << j << " " << k;
    return 0;
}