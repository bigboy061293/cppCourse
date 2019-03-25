#include <iostream>
#include <cstdlib>
#include <ctime>
#include "constants.h"
#include <cassert>
#include <cmath>
#include "matrix.h"
#include "vector.h"
using namespace std;
double **allocate(const int &numRows_A, const int &numCols_A)
{
//	for (int i = 0; i < numRows_A; i++) 
//		A[i] = new MATRIX[numCols_A];
//	return A 

	double **A  =new double* [numRows_A] ;

	
 
	for (int i = 0; i < numRows_A; i++)
		A[i] = new double[numCols_A];
	return A; 
}

void deallocate(double **A, const int &numRows_A, const int &numCols_A)
{
	for (int i = 0; i < numRows_A; i++)
		delete []A[i];
	delete []A;
}

//void zeroMat(double **A, const int & numRows, const int & numCols);
//void randMat(double **A, const int & numRows, const int & numCols);

void zeroMat(double **A, const int & numRows, const int & numCols)
{
	for (int i = 0; i < numRows; i++) 
		zeroVec(A[i],numCols);
}

void randMat(double **A, const int & numRows, const int & numCols)
{
	for (int i = 0; i < numRows; i++) 
		randVec(A[i],numCols);
}

void printMat(double **A, const int &numRows, const int &numCols)
{
	
	for (int i = 0; i < numRows; i ++)
	{
		for (int j = 0; j < numCols; j++) 
			cout << A[i][j] << "   ";
		cout << endl;
	}
}
void addMat(double **A, const int & numRows_A, const int & numCols_A, 
		double **B, const int & numRows_B, const int & numCols_B, 
		double **C, const int & numRows_C, const int & numCols_C)
{
	assert( numRows_A == numRows_B);
	assert( numCols_A == numCols_B);
	assert( numRows_A == numRows_C);
	assert( numCols_C == numCols_C);
	for (int i = 0; i < numRows_A; i ++)
	{
		for (int j = 0; j < numCols_A; j++) 
			C[i][j] = A[i][j] + B[i][j];
	}

}

void mulMat(double **A, const int & numRows_A, const int & numCols_A, 
		double **D, const int & numRows_D, const int & numCols_D, 
		double **E, const int & numRows_E, const int & numCols_E)
{
	//assert( numRows_A == numRows_B);
	assert( numCols_A == numRows_D);
	assert( numRows_A == numRows_E);
	assert( numCols_D == numCols_E);
	
	for (int i = 0; i < numRows_A; i ++)
		for (int j = 0; j < numCols_D; j++)
			for (int k =0; k < numCols_A; k++)

			E[i][j] = E[i][j] + A[i][k] * D[k][j];

}

void mulMat(double **A, const int & numRows_A, const int & numCols_A, const int &alpha)
{
	for (int i = 0; i < numRows_A; i ++)
		for (int j = 0; j < numCols_A; j++)
			A[i][j] *= alpha;
		
}


void mulMat(double **A, const int & numRows_A, const int & numCols_A, 
		double *v, const int &size_v, double *t, const int &size_tt )
{
	// Check if this is transpone or normal vector
	assert( numRows_A == size_v); 
	assert( numCols_A == size_tt);

	
	for (int i = 0; i < numRows_A; i ++)
		for (int k =0; k < numCols_A; k++)
			t[i] = t[i] + A[i][k] * v[k];
}

//double detMat(double** A, const int & numRows_A, const int & numCols_A, const int & originRow) 


double determinant(double** A, const int & numRows_A, const int & numCols_A) 
{
	assert( numRows_A == numCols_A);
	int n = numRows_A;	   
   	double det = 0;
   	double** submatrix;
	submatrix = allocate(n,n);
   	
	if (n == 2)
      	return ((A[0][0] * A[1][1]) - (A[1][0] * A[0][1]));
   	
	else 
	{
      		for (int x = 0; x < n; x++) 
		{
            		int subi = 0; 
            		for (int i = 1; i < n; i++) 
			{
               			int subj = 0;
               			for (int j = 0; j < n; j++) 
				{
                  			if (j == x)  continue;
                  		submatrix[subi][subj] = A[i][j];
				//cout << submatrix[subi][subj] << endl;
                  		subj++;
               			}
               		subi++;
            		}
			//printMat(submatrix,n,n);
			//cout << endl;
            	det = det + (pow(-1, x) * A[0][x] * determinant( submatrix, n - 1, n-1 ));
		//cout << det << endl;
      		}
   	}
	deallocate(submatrix,n,n);
   return det;
}
