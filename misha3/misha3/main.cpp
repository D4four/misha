#include <iostream>
#include <locale>
#include <math.h>

#define pi 3.14159

using namespace std;

//y = a*x^3+b*x^2+c*x+d
//y = f*x+g

int main() {

	setlocale(LC_ALL, "");

	float a, b, c, d, f, g, b1, b2, b3, p, q, Q;

	cout << "a="; cin >> a;
	cout << "b="; cin >> b;
	cout << "c="; cin >> c;
	cout << "d="; cin >> d;
	cout << "f="; cin >> f;
	cout << "g="; cin >> g;

	d -= g; c -= f;

	b1 = b / a; b2 = c / a; b3 = d / a;
	p = -(pow(b1, 2))/3 + b2; q = 2*pow(b1, 3)/27 - (b1*b2)/3 + b3;
	Q = pow(p/3, 3) + pow((q / 2), 2);

	if (Q >= 0) {

	}
	else {

	}

	return 0;
}