/* Block comment :
* The first C ++ code
* Coded by Thien Binh Nguyen , 28 jan 2019 */
#include <iostream>
#include <cmath>

using namespace std ;
int main ()
{
int k;

//k = 10e40;

//double x,y;
//x = (1.0 + 1) /2;
//y = 0.5 + 1.0/2; // 1/2 equals to 0 => important to care the division operator! => corrected by
// 0.5 + 1.0/2.0 or 0.5 + 1/2.0 or 0.5 + 1.0/2



// line comment : print " Hello World " to the screen
//cout << " Hello World ! " << endl ;
//	std::cout << x <<std::endl << y <<std::endl;
	
double x;
double pi = 4*atan(1.0);
	cin >> x;
	cout << sqrt(cos(pi*x/2) + pow(sin(pi*x/3),3)) << endl;
	cout << cbrt(2*exp(2*x) - pow(abs(x),3)) << endl;
return 0;
}
