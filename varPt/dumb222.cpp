#include <iostream>
#include <cassert>
#include <cstdlib>

using namespace std;
typedef double SCALAR, VECTOR, MATRIX;
typedef int SIZE_VEC, SIZE_MAT;
const double ZERO = 0.0000000000000000000000000;
const int m = 5;
const int n = 4;

int main()
{
	SCALAR alpha(ZERO);
	VECTOR *v, *w, *t, *u;
	MATRIX **A, **B, **C, **D, **E;

	SIZE_VEC size_v, size_w, size__t, size_u;
	SIZE_MAT numRows_A, numCols_A;
	SIZE_MAT numRows_B, numCols_B;
	SIZE_MAT numRows_C, numCols_C;
	SIZE_MAT numRows_D, numCols_D;
	SIZE_MAT numRows_E, numCols_E;

	// dynamic mem alloc with new
	v = new VECTOR[size_v];
	w = new VECTOR[size_w];
	t = new VECTOR[size__t];
	u = new VECTOR[size_u];

	
	A = new MATRIX* [numRows_A]



	for (int i = 0; i < numRows_A; i++) A[i] = new MATRIX[numCols_A];
	for (int i = 0; i < numRows_B; i++) B[i] = new MATRIX[numCols_B];
	for (int i = 0; i < numRows_C; i++) C[i] = new MATRIX[numCols_C];
	for (int i = 0; i < numRows_D; i++) D[i] = new MATRIX[numCols_D];
	for (int i = 0; i < numRows_E; i++) E[i] = new MATRIX[numCols_E];

//	for (int i = 0; i< size_v; i++) v[i] = (double)(1 + rand() %10);
//	for (int i = 0; i < numRows_A; i++)
//		for (int j = 0; j < numCols_A; j++) A[i][j] = (double)( 1 + rand()%10);


	// t, u, C, E = 0;

	for (int i = 0; i< size__t; i++) t[i] = ZERO;
	for (int i = 0; i< size_u; i++) u[i] = ZERO;


	for (int i = 0; i < numRows_C; i++)
		for (int j = 0; j < numCols_C; j++) C[i][j] = ZERO;

	for (int i = 0; i < numRows_E; i++)
		for (int j = 0; j < numCols_E; j++) E[i][j] = ZERO;




	

	delete[] v;
	delete[] w;
	delete[] t;
	delete[] u;

	for (int i = 0; i < numRows_A; i++) A[i] = new MATRIX[numCols_A]; delete []A[i]
	delete[] A;
	for (int i = 0; i < numRows_B; i++) A[i] = new MATRIX[numCols_B]; delete []B[i]
	delete[] B;
	for (int i = 0; i < numRows_C; i++) A[i] = new MATRIX[numCols_C]; delete []C[i]
	delete[] C;
	for (int i = 0; i < numRows_D; i++) A[i] = new MATRIX[numCols_D]; delete []D[i]
	delete[] D;
	for (int i = 0; i < numRows_E; i++) A[i] = new MATRIX[numCols_E]; delete []E[i]
	delete[] E;
}
