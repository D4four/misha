#include <iostream>
#include <locale>
#include <math.h>

using namespace std;

int main() {

	setlocale(LC_ALL, "");

	int x;

	cout << "Введите X" << endl;
	cin >> x;
	double res2;
	double res1 = pow(x, 2) + 256 / pow(x, 2);

	for (int i = 128; i >= 2; i /= 2) {
		res2 = pow(x, 2) + i / res1;
		res1 = res2;
	}

	double xr = x / res1;

	cout << "Результат: " << xr << endl;

	return 0;
}