#include <iostream>
#include <locale>
#include <math.h>

//AB = √(xb - xa)2 + (yb - ya)2 + (zb - za)2

using namespace std;

int main() {

	setlocale(LC_ALL, "");

	double x1, x2, y1, y2, z1, z2;

	cout << "Введите координаты 1-го вектора:" << endl;
	cin >> x1 >> y1 >> z1;
	cout << "Введите координаты 2-го вектора:" << endl;
	cin >> x2 >> y2 >> z2;

	double scal = x1 * x2 + y1 * y2 + z1 * z2;

	if (scal == 0) {
		cout << "Векторы перпендикуляны" << endl;
		double l = sqrt(pow(x1, 2) + pow(y1, 2) + pow(z1, 2) + pow(x2, 2) + pow(y2, 2) + pow(z2, 2));
		cout << "Длина диагонали: " << l << endl;
	}
	else {
		cout << "Векторы не перпендикуляны" << endl;
	}

	return 0;
}