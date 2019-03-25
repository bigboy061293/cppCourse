#ifndef _VECTOR_
#define _VECTOR_

double *allocate(const int & numCols);
void deallocate(double* v);
double &setVec(double* v , const int & index);
double getVec(double* v , const int & index);
void zeroVec (double* v, const int & index);
void addVec (double*v, const int &size_v, double*w, const int &size_w, double*t, const int &size_tt);
void randVec(double *v, const int &size_v);
void printVec(double *v, const int &size_v);
double normVec(double *v, const int &size_v, const int &norm);
void mulScaVec(double alpha, double* v, const int & size_v, double* t, const int & size_tt);
void dotProd(double *v, const int &size_v, double *w, const int &size_w, double *t, const int &size_tt);
void crossProd(double *v, const int &size_v, double *w, const int &size_w, double **E, const int &sizeRows_E, const int &sizeCols_E);
#endif
