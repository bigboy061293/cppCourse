#include <iostream>
using namespace std;
int abc = 100;

extern int varFromSec;

int asd()
{
	abc = 10;
}
int main()
{
cout << abc << endl;
cout << &abc << endl;
	{
		//int abc = 10;
		//int a = 10;
		//cout << abc << endl;
		//cout << &abc << endl;
		//int a = 10;
	}
cout << varFromSec << endl;
cout << &varFromSec << endl;

// That shit of what calls "global" and "ccccocallllll"
return 0;
}
