#include <iostream>
#include <locale>
#include <vector>
#include <math.h>

using namespace std;

//y = a*x^3+b*x^2+c*x+d
//y = f*x+g

vector<int> mult(int el) {

	vector<int> m;
	if (el > 0) {
		for (int i = 1; i <= el; i++) {
			for (int j = 1; j <= el; j++) {
				if (i * j == el) {
					m.push_back(i);
					break;
				}
			}
		}
	}
	else {
		for (int i = el; i <= -1; i++) {
			for (int j = el; j <= -1; j++) {
				if (i * j == -el) {
					m.push_back(i);
					break;
				}
			}
		}
	}
	

	return m;
}

int main() {

	setlocale(LC_ALL, "");
	cout << "Введите коэффициенты уравнений: y = a*x^3+b*x^2+c*x+d, y = f*x+g" << endl;

	int a, b, c, d, f, g; // коэффициенты могут быть только целочисленными, иначе решаеться это через кучу разных непонятныых формул c мнимой единицой

	cout << "a="; cin >> a;
	cout << "b="; cin >> b;
	cout << "c="; cin >> c;
	cout << "d="; cin >> d;
	cout << "f="; cin >> f;
	cout << "g="; cin >> g;

	d -= g;
	c -= f;

	vector<int> temp;
	vector<int> corniY;
	vector<int> corniX;
	int cor;

	if (d != 0) {
		temp = mult(d);

		int size = temp.size();

		for (int i = 0; i < size; i++) {
			temp.push_back(-temp[i]);
		}

		for (int i = 0; i < temp.size(); i++) {
			if (a * temp[i] * temp[i] * temp[i] + b * temp[i] * temp[i] + c * temp[i] + d == 0) {
				corniX.push_back(temp[i]);
				break;
			}
		}

		b = b + corniX.front() * a;
		c = c + corniX.front() * b;

		int d1 = pow(b, 2) - 4 * a * c;
		if (d1 >= 0) {
			corniX.push_back((-b - sqrt(d1)) / (2 * a));
			corniX.push_back((-b + sqrt(d1)) / (2 * a));
		}
		
		for (int i = 0; i < corniX.size(); i++) {
			corniY.push_back(f * corniX[i] + g);
		}

		if (corniX.size() == 0) {
			cout << "Точек пересечений нет" << endl;
		}
		else {
			cout << "Точки пересечений:" << endl;
			for (int i = 0; i < corniX.size(); i++) {
				cout << "(" << corniX[i] << " ; " << corniY[i] << ")" << endl;
			}
		}

	}
	else {
		corniX.push_back(0);
		int d1 = pow(b, 2) - 4*a*c;
		if (d1 >= 0) {
			corniX.push_back((-b - sqrt(d1)) / (2 * a));
			corniX.push_back((-b + sqrt(d1)) / (2 * a));
		}
		for (int i = 0; i < corniX.size(); i++) {
			corniY.push_back(f * corniX[i] + g);
		}

		if (corniX.size() == 0) {
			cout << "Точек пересечений нет" << endl;
		}
		else {
			cout << "Точки пересечений:" << endl;
			for (int i = 0; i < corniX.size(); i++) {
				cout << "(" << corniX[i] << " ; " << corniY[i] << ")" << endl;
			}
		}
		
	}

	return 0;
}