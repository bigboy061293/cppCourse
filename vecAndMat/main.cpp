#include <iostream>
#include <cassert>
#include <cstdlib>
#include <ctime>
#include "constants.h"
#include "vector.h"
#include "matrix.h"

#define DEBUG
//#define VECTOR_IND 
#define MATRIX_IND 
using namespace std;


int main()
{
double alpha(TWO), beta(ZERO);
double *v, *w, *t;
int size_v, size_w, size_tt;
double **A, **B, **C, **D, **E;
int numRows_A, numCols_A;
int numRows_B, numCols_B;
int numRows_C, numCols_C;
int numRows_D, numCols_D;
int numRows_E, numCols_E;
cout.precision(10);

/*
1. Init vector and matrix size
*/
	size_v = 5;
	size_w = 5; 
	size_tt = 5;

	numRows_A = 5; numCols_A = 4; 
	numRows_B = 5; numCols_B = 4; 
	numRows_C = 5; numCols_C = 4; 
	numRows_D = 4; numCols_D = 5; 
	numRows_E = 5; numCols_E = 5; 

/*
2. Allocate
*/
	v = allocate(size_v);
	w = allocate(size_w);
	t = allocate(size_tt);	
	
	A = allocate(numRows_A, numCols_A);
	B = allocate(numRows_B, numCols_B);
	C = allocate(numRows_C, numCols_C);
	D = allocate(numRows_D, numCols_D);
	E = allocate(numRows_E, numCols_E);

/*
3. Init vector and matrix
*/

	randVec(v,size_v);
	randVec(w,size_w);
	zeroVec(t,size_tt);

	randMat(A,numRows_A, numCols_A);
	randMat(B,numRows_B, numCols_B);
	zeroMat(C,numRows_C, numCols_C);
	randMat(D,numRows_D, numCols_D);
	zeroMat(E,numRows_E, numCols_E);
/*
4. Set
*/

	setVec(v, 3) = 10.0;

	//setVec(w, 5) = 1.0;
	cout << sizeof(w) << endl;
	cout << sizeof(*w) << endl;
	
/*
5. Print out
*/	
	
	cout << " ----- Test for init value function zeroMat and randMat  ----- " << endl;

	cout << " ------------ Vector V ------------ " << endl;
	printVec(v, size_v);
	cout << " ------------ Vector W ------------ " << endl;
	printVec(w, size_w);
	cout << " ------------ Vector T ------------ " << endl;
	printVec(t, size_tt);
	cout << " ------------ Matrix A ------------ " << endl;	
	printMat(A,numRows_A, numCols_A);
	cout << " ------------ Matrix B ------------ " << endl;
	printMat(B,numRows_B, numCols_B);
	cout << " ------------ Matrix C ------------ " << endl;
	printMat(C,numRows_C, numCols_C);
	cout << " ------------ Matrix D ------------ " << endl;
	printMat(D,numRows_D, numCols_D);
	cout << " ------------ Matrix E ------------ " << endl;
	printMat(E,numRows_E, numCols_E);
/*
6. Computing norm
*/	


	double norm2_v(ZERO), norminf_v(ZERO);
	norm2_v = normVec(v, size_v, 2);
	norminf_v = normVec(v, size_v, p_INF);
	cout << " ---------- Norm 2 and INF ---------- " << endl;
	cout << norm2_v << endl;
	cout << norminf_v << endl;

/*
7. Operations
*/	

// Adding vetors
	addVec(v, size_v, w, size_w, t, size_tt);
	cout << " ------------ Vector T ------------ " << endl;
	printVec(t, size_tt);

// Multiply vector by scalar

	mulScaVec(alpha, v, size_v, t, size_tt);
	cout << " ------------ Vector T ------------ " << endl;
	printVec(t, size_tt);

// Dot prodcut

	dotProd(v, size_v, w, size_w, t, size_tt);
	cout << " ------------ Vector T ------------ " << endl;
	printVec(t, size_tt);
// Cross product

	crossProd(v,size_v,w, size_w, E,numRows_E,numCols_E);
	cout << " ------------ Matrix E ------------ " << endl;
	printMat(E,numRows_E, numCols_E);

// Adding two matrix

	addMat(A,numRows_A, numCols_A, B,numRows_B, numCols_B, C,numRows_C, numCols_C);
	cout << " ------------ Matrix C ------------ " << endl;
	printMat(C,numRows_C, numCols_C);

// Zero C and E
	zeroMat(C,numRows_C, numCols_C);
	zeroMat(E,numRows_E, numCols_E);

// Multiply matrix by matrix

	mulMat(A,numRows_A, numCols_A, D,numRows_D, numCols_D, E,numRows_E, numCols_E);
	cout << " ------------ Matrix E ------------ " << endl;
	printMat(E,numRows_E, numCols_E);

// Multiply matrix by scalar

	mulMat(E,numRows_E, numCols_E, alpha);
	cout << " ------------ Matrix E ------------ " << endl;
	printMat(E,numRows_E, numCols_E);

//// Multiply matrix by vector

	mulMat(E,numRows_E,numCols_E,v,size_v, t,size_tt );
	
	cout << " ------------ Vector T ------------ " << endl;
	printVec(t, size_tt);



/*
8. Calculating determinatin
*/

// Init new E
	randMat(E,numRows_E, numCols_E);
	printMat(E,numRows_E, numCols_E);

	cout << " ------------ DET E ------------ " << endl;
	//cout << detMat(E,numRows_E,numCols_E,numCols_E) << endl;
	//detMat(E,numRows_E,numCols_E);
	
	 cout << determinant(E,numRows_E,numCols_E ) << endl;
		


/*
9. Deallocation
*/
	deallocate(v);
	deallocate(w);
	deallocate(t);

	deallocate(A, numRows_A, numCols_A);
	deallocate(B, numRows_B, numCols_B);
	deallocate(C, numRows_C, numCols_C);
	deallocate(D, numRows_D, numCols_D);
	deallocate(E, numRows_E, numCols_E);
	

	return 0;
}

