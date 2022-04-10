#include <iostream>
#include <locale>

using namespace std;

int main() {

	double m, x, y;

	setlocale(LC_ALL, "");

	cout << "Введите координаты точка M:" << endl;
	cin >> x >> y;

	if (x == 0 && y == 0) {
		cout << "Точка M является началом коорлинат" << endl;
	}
	else if (x == 0) {
		cout << "Точка M лежит на оси ординат 'Oy'" << endl;
	}
	else if (y == 0) {
		cout << "Точка M лежит на оси абсцисс 'Ox'" << endl;
	} else if (x > 0 && y > 0) {
		cout << "Точка M лежит в первом координатном угле" << endl;
	}
	else if (x > 0 && y < 0) {
		cout << "Точка M лежит в четвертом координатном угле" << endl;
	}
	else if (x < 0 && y < 0) {
		cout << "Точка M лежит в третьем координатном угле" << endl;
	}
	else if (x < 0 && y > 0) {
		cout << "Точка M лежит во втором координатном угле" << endl;
	}

	return 0;
}

