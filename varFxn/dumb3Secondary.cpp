#include <iostream>
using namespace std;
//int abc = 1293;
int varFromSec = 1293;

int globalOrLocal()
{
	int a = 10;
	return 10;
}


int& globalOrLocalRef()
{
	int &a ;
	return a;
}

int main()
{
	cout << globalOrLocal() << endl;
	cout << globalOrLocalRef() << endl;
}
