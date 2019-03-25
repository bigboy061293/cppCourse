#ifndef _MATRIX_
#define _MATRIX_

double **allocate(const int & numRows, const int & numCols );
void deallocate(double** A,const int & numRows, const int & numCols );


double &setVal(double ** A , const int & numRows, const int & numCols);
double getVal(double ** A , const int & numRows, const int & numCols);
void zeroMat(double **A, const int & numRows, const int & numCols);
void randMat(double **A, const int & numRows, const int & numCols);
void addMat(double **A, const int & numRows_A, const int & numCols_A, 
		double **B, const int & numRows_B, const int & numCols_B, 
		double **C, const int & numRows_C, const int & numCols_C);
void printMat(double **A, const int &numRows, const int &numCols);
void mulMat(double **A, const int & numRows_A, const int & numCols_A, 
		double **D, const int & numRows_D, const int & numCols_D, 
		double **E, const int & numRows_E, const int & numCols_E);

void mulMat(double **A, const int & numRows_A, const int & numCols_A, const int &alpha);
		
void mulMat(double **A, const int & numRows_A, const int & numCols_A, 
		double *v, const int &size_v, double *t, const int &size_tt );

double detMat(double** A, const int & numRows_A, const int & numCols_A, const int &  originRow);
double determinant( double** A , const int & numRows_A, const int & numCols_A);
//void zeroVec (double* v, const int & index);
//void addVec (double*v, const int &size_v, double*w, const int &size_w, double*t, const int &size_tt);
//void randVec(double *v, const int &size_v);

#endif

