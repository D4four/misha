#include <iostream>
#include <locale>
#include <math.h>

using namespace std;

int main() {

	setlocale(LC_ALL, "");

	int n;

	int c, q, r, b, d;

	cout << "������� q:" << endl;
	cin >> q;
	cout << "������� r:" << endl;
	cin >> r;
	cout << "������� b:" << endl;
	cin >> b;
	cout << "������� c:" << endl;
	cin >> c;
	cout << "������� d:" << endl;
	cin >> d;

	cout << "������� n:" << endl;
	cin >> n;

	int* arr = new int[n+1];

	arr[0] = c;
	arr[1] = q;

	int res;

	for (int i = 2; i <= n; i++) {
		arr[i] = q * arr[i - 1] + r * arr[i - 2] + b;
	}

	cout << "���������:" << arr[n] << endl;
	return 0;
}