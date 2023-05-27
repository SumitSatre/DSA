#include <iostream>
using namespace std;
#define PI 3.1416
#define AREA(r) (PI*(r)*(r))

int main() {
	
	float r = 7; // radius of circle
	
	cout<<"Area of Circle with radius " << r <<": "<< AREA(r)<<endl;
	return 0;
}
