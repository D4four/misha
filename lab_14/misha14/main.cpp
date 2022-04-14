#include <iostream>
#include <locale>
#include <map>
#include <math.h>
#include <iomanip>

// y=x^3+5x^2+3x-5 

using namespace std;

int main() {

	setlocale(LC_ALL, "");

	map <int, int> table;

	int a, b, h, x, y;

	cout << "Дана функция: y=x^3+5x^2+3x-5" << endl;

	cout << "Введите интервал [a;b]" << endl;
	cin >> a >> b;

	cout << "Введите шаг h" << endl;
	cin >> h;

	while (a <= b) {
		x = a;
		y = pow(x, 3) + 5 * pow(x, 2) + 3 * x - 5;
		table[x] = y;
		a += h;
	}

	map <int, int> ::iterator it;
	cout << "_______";
	for (it = table.begin(); it != table.end(); it++) {  // выводим их
		cout << "_______";
	}
	cout << endl;
	cout << setw(3) << "|  x  |";
	for (it = table.begin(); it != table.end(); it++) {  // выводим их
		cout << setw(3) << it->first << "   |";
	}
	cout << endl;
	for (it = table.begin(); it != table.end(); it++) {  // выводим их
		cout << "-------";
	}
	cout << "-------";
	cout << endl;
	
	cout << setw(3) << "|  y  |";
	for (it = table.begin(); it != table.end(); it++) {  // выводим их
		cout << setw(3) << it->second << "   |";
	}
	cout << endl;
	for (it = table.begin(); it != table.end(); it++) {  // выводим их
		cout << "-------";
	}
	cout << "-------";
	return 0;
}
