/* Block comment :
* The first C ++ code
* Coded by Thien Binh Nguyen , 28 jan 2019 */
#include <iostream>
#include <cmath>

using namespace std ;
int main ()
{

double ep = 10000.0;
double f = 0.0;
double x = 0.0;
double xOld = 0.0;
int count = 1;
while (ep > 1.0e-5)
{
	x = xOld - (exp(xOld) + pow(x,3) - 5) / (exp(xOld) + 3* pow(xOld,2)); 
	ep = abs(x - xOld);	
	xOld = x;
	cout << count << "  ";
	cout << xOld << "  ";
	cout << ep << endl;
	
	count ++;
}
//cout << count << endl;
//cout << x << endl;
//cout << (exp(x) + pow(x,3) - 5) << endl;
return 0;
}
