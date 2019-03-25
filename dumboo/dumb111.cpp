/* Block comment :
* The first C ++ code
* Coded by Thien Binh Nguyen , 28 jan 2019 */
#include <iostream>
#include <cmath>
#include <fstream>
using namespace std;

int main ()
{


ofstream outfile;
outfile.open("afile.dat");

double piii, temp, pi2, pi3;
temp = 0.0;
int k;
//double pi = 4*atan(1.0);
//	cin >> x;
//	cout << sqrt(cos(pi*x/2) + pow(sin(pi*x/3),3)) << endl;
//	cout << cbrt(2*exp(2*x) - pow(abs(x),3)) << endl;
for (k = 1; k < 100; k++)
{
	temp = temp + 1.0/(pow( double(k),4.0));
}


cout.precision(54);
piii = pow(90.0 * temp, 1.0/4.0);

cout << temp << endl;
cout << piii << endl;


outfile.precision(54);
outfile << piii << endl;
outfile.close();

ifstream infile;

infile.open("afile.dat");

infile >> pi2;

cout << pi2 << endl;

pi2+= 0.000000000000001;
pi3 = (pi2 - piii);

cout << pi3 << endl;
return 0;
}
