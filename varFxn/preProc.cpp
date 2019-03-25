#include <iostream>
using namespace std;
int abc = 100;

extern int varFromSec; 

double *allocateVec(const int & numCols)
{
	double * v ;
	v = new double [numCols] ;
	return v ;
}
void deallocateVec(double* v)
{
	delete [] v ;// for arrays
}
double &setVal(double v [] , const int & index )
{
	return v [index] ;
}
double getVal(double v [] , const int & index )
{
	return v [index] ;
}

void printSth()
{
	#ifdef ABC
		cout << "1" << endl;
	#endif

	#ifndef ABC
		cout << "2" << endl;
	#endif
}

#define ABC // ----------------------------------> preProc ignores all contents except #
int main()
{

	printSth();
	return 0;
}
