#include <iostream>
#include <cmath>

using namespace std ;
int main ()
{


int aa, bb;
float cc;

aa = 2;
bb =5;
cc = aa/bb;
cout << cc << endl;


cc = (float) aa/bb;
cout << cc << endl;


// REF
int a = 10;
int &b = a;
b= a;
	cout << a << endl;
	cout << &a << endl;
	cout << b << endl;
	cout << &b << endl;


// pointer
int *pta;

pta = &a;

	cout << a << endl;
	cout << *pta << endl;
	cout << &pta << endl;
	return 0;

}

