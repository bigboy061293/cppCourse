/* Block comment :
* The first C ++ code
* Coded by Thien Binh Nguyen , 28 jan 2019 */
#include <iostream>
#include <cmath>

using namespace std ;
int main ()
{
// A little cute confusing
cout << "A little cute confusing" << endl;
// reference examples
int a = 10;
int &b = a;
//*int bb = 0x7ffd4372217c;

cout << a <<"     " << &a << endl;
cout << b <<"     " << &b << endl;

b = 11;

cout << a <<"     " << &a << endl;
cout << b <<"     " << &b << endl;

//&a = 0;

//cout << a <<"     " << (&a)++ << endl;
//cout << b <<"     " << &b << endl;


// pointer examples

int *pa = &a; // beware of that shit!!!
int* ppa = &a; // int * a, b -> a is pointer and b is value



// pointers point to nothing
int *pi, *pj;


cout << a <<"     " << &a << endl;
cout << pa <<"     " << &pa <<  endl;
cout << ppa <<"     " << &a <<  endl;


cout << *pi << endl;
cout << *pj << endl;
cout << *pi + *pj << endl;




return 0;
}
