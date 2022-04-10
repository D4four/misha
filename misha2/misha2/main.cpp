#include <iostream>
#include <locale>

using namespace std;

int main() {

	setlocale(LC_ALL, "");

	double a, b, alpha;

	cout << "Введите стороны a и b:" << endl;
	cin >> a >> b;

	cout << "Введите угол между a и b:" << endl;
	cin >> alpha;

	if (a == b && (int(alpha) % 90 == 0)) {
		cout << "Параллелограмм явлется квадратом" << endl;
	}
	else if (a == b) {
		cout << "Параллелограмм явлется ромбом" << endl;
	}
	else if ((int(alpha) % 90 == 0)) {
		cout << "Параллелограмм явлется прямоугольником" << endl;
	}
	else {
		cout << "Параллелограмм" << endl;
	}

	return 0;
}