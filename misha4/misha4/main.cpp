#include <iostream>
#include <limits>
#include <math.h>
#include <locale>

#define MIN INT_MAX;

//AB = √(xb - xa)2 + (yb - ya)2 + (zb - za)2

using namespace std;

int main() {

	setlocale(LC_ALL, "");

	double min = INT_MAX;
	int index;

	double a[3] = {0, 0, 0};
	double b[3] = {0, 0, 0 };
	double c[3] = {0, 0, 0 };

	cout << "Введите x, y, z для точки первой точки a" << endl;
	cin >> a[0] >> a[1] >> a[2];
	cout << "Введите x, y, z для точки второй точки b" << endl;
	cin >> b[0] >> b[1] >> b[2];
	cout << "Введите x, y, z для точки третьей точки c" << endl;
	cin >> c[0] >> c[1] >> c[2];

	double len[3] = { 0, 0, 0 };

	len[0] = sqrt(pow((b[0] - a[0]), 2) + pow((b[1] - a[1]), 2) + pow((b[2] - a[2]), 2));
	len[1] = sqrt(pow((c[0] - b[0]), 2) + pow((c[1] - b[1]), 2) + pow((c[2] - b[2]), 2));
	len[2] = sqrt(pow((a[0] - c[0]), 2) + pow((a[1] - c[1]), 2) + pow((a[2] - c[2]), 2));

	for (int i = 0; i < 3; i++) {
		if (len[i] < min) {
			min = len[i];
			index = i;
		}
	}

	switch (index)
	{
	case 0:
		cout << "Расстояние между a и b минимальное " << endl;
		break;
	case 1:
		cout << "Расстояние между b и c минимальное " << endl;
		break;
	case 2:
		cout << "Расстояние между c и a минимальное " << endl;
		break;
	default:
		break;
	}

	return 0;
}