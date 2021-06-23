#include <iostream>
#include <cmath>
#include <conio.h>

/*	Source by Programiz
	Modified For Learn by Rizky Khapidsyah
	I.D.E : VS2019 */

using namespace std;

int main() {
	double x = 14.86, intPart, fractPart;

	fractPart = modf(x, &intPart);
	cout << x << " = " << intPart << " + " << fractPart << endl;

	x = -31.201;
	fractPart = modf(x, &intPart);
	cout << x << " = " << intPart << " + " << fractPart << endl;

	_getch();
	return 0;
}