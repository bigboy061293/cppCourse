#include <iostream>
#include <cstdlib>
#include <cassert>
#include <ctime>
#include <cmath>
#include "constants.h"
#include "vector.h"
using namespace std;
double *allocate(const int &numCols)
{
	double * v ;
	v = new double [numCols] ;
	return v ;
}
void deallocate(double* v)
{
	delete []v ;// for arrays
}
double &setVec(double *v , const int &index)
{
	//assert( (sizeof(v) / sizeof(double)) <= index);
	return v[index] ;
}
double getVec(double *v , const int &index )
{
	return v[index] ;
}

void zeroVec(double *v, const int &size_v)
{
	for (int i =0; i < size_v; i++)
		v[i] = ZERO;
}

void randVec(double *v, const int &size_v)
{
	//rand(time(NULL));
	for (int i =0; i < size_v; i++)
		v[i] = ZERO + rand() % (int) ONE_HUNDRED;
}

void printVec(double *v, const int &size_v)
{
	for (int i = 0; i < size_v; i++) cout << v[i] << "  ";
	cout << endl;
}
void addVec(double *v, const int &size_v,
		double *w, const int &size_w,
		double *t, const int &size_tt)
{
	
	assert(size_v == size_w);
	assert(size_v == size_tt);
	for (int i = 0; i < size_v; i++)
		t[i] = v[i] + w[i];
	
}

double normVec(double *v, const int &size_v, const int &norm)
{
	double normVal = 0.0;
	for (int i =0; i < size_v; i++)
	{
		normVal += pow(abs(v[i]), (double)norm);
	}
	normVal = pow(normVal, (double) (1.0/norm));
	return normVal;

}

void mulScaVec(double alpha, double* v, const int & size_v, double* t, const int & size_tt)
{
	assert(size_v == size_tt);
	for (int i = 0; i < size_tt; i ++)
		t[i] = v[i] * alpha;
	
}

void dotProd(double *v, const int &size_v,
		double *w, const int &size_w,
		double *t, const int &size_tt)
{
	assert(size_v == size_w);
	assert(size_v == size_tt);
	for (int i = 0; i < size_v; i++)
		t[i] = v[i] * w[i];
}

void crossProd(double *v, const int &size_v, double *w, const int &size_w, double **E, const int &sizeRows_E, const int &sizeCols_E)
{
	for (int i = 0; i < size_v; i++)
		for (int j = 0; j < size_w; j++)
			E[i][j] = v[i] * w[j];
}
