#include <iostream>
#include <locale>

using namespace std;

int main() {

	setlocale(LC_ALL, "");

	int x, temp = 1, cnt = 1; 

	cout << "Введите число: " << endl;
	cin >> x;

	while (temp < x) {
		temp = temp * (cnt + 1);
		cnt++;
	}

	if (x == 1) {
		cout << x << " является факториалом 0 и 1" << endl;
	}
	else {
		if (temp == x) {
			cout << x << " является факториалом " << cnt << endl;
		}
		else {
			cout << x << " не является факториалом какого либо числа" << endl;
		}
	}
	

	return 0;
}