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

int main()
{
double* vectorA;
	vectorA = allocateVec(3);

	setVal(vectorA, 0) = 1;
	setVal(vectorA, 1) = 1;
	setVal(vectorA, 2) = 1;

	cout << getVal(vectorA,0) << "  " << getVal(vectorA,1) << "  " << getVal(vectorA,2) << endl;

	deallocateVec(vectorA);
	return 0;
}
