// C++ Program to demonstrate that a void pointer
// cannot be dereferenced

#include <iostream>                                          
using namespace std;                                          

int main()
{
	int a = 10;
	void *ptr = &a;

	cout << *(int*)ptr;

	return 0;
}

// This code is contributed by sarajadhav12052009 