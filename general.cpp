// Write a program in C++ to print the area of a hexagon
#include <iostream>
#include <math.h>
using namespace std;

AreaHex(int a)
{
	cout << "Area of a hexagon is:\n" << (sqrt(3)*3*a*a)/2;
}

int main()
{
	int a;
	cout << "Please enter the side of the hexagon" << endl;
	cin >> a;
	AreaHex(a);
}
