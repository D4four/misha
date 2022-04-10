#include <iostream>
#include <locale>
#include <vector>
#include <math.h>

//An = A1 + d(n-1);

using namespace std;

int main() {

	setlocale(LC_ALL, "");

	double a1, a2, d, item, count = 0;
	int n = 1;
	cout << "Введите два числа арифметической прогрессии:" << endl;
	cin >> a1 >> a2;

	d = a2 - a1;

	cout << "Введите предполагаемое число:" << endl;
	cin >> item;

	while (count < item) {
		count = a1 + d*(n - 1);
		n++;
	}

	if (count == item) {
		cout <<  item << " являеться " << n-1 << "-ым членом данной прогрессии" << endl;
	}
	else {
		cout << item << "не являеться членом данной прогрессии" << endl;
	}

	return 0;
}