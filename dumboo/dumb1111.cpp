/* Block comment :
* The first C ++ code
* Coded by Thien Binh Nguyen , 28 jan 2019 */
#include <iostream>
#include <cmath>

using namespace std ;
int main ()
{
int i = 0;
double pi = 4*atan(1.0);
double h = 0;
double f = 0;
double intr = 0;
double x = 0;
int m;
h = (pi - 0) / m;

for (i = 0; i< m+1; i++)
{
	x = pi/m * i;
	f = sin(x);
	if ((i ==0) || (i == m)) f = f/2;
	
	intr+= f;
}
intr*= h;
cout.precision(20);
cout << intr << endl;
return 0;
}
