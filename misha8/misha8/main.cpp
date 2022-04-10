#include <iostream>
#include <locale>
#include <math.h>

using namespace std;

int main() {

	setlocale(LC_ALL, "");

	int n;

	int c, q, r, b, d;

	cout << "¬ведите q:" << endl;
	cin >> q;
	cout << "¬ведите r:" << endl;
	cin >> r;
	cout << "¬ведите b:" << endl;
	cin >> b;
	cout << "¬ведите c:" << endl;
	cin >> c;
	cout << "¬ведите d:" << endl;
	cin >> d;

	cout << "¬ведите n:" << endl;
	cin >> n;

	int* arr = new int[n+1];

	arr[0] = c;
	arr[1] = q;

	int res;

	for (int i = 2; i <= n; i++) {
		arr[i] = q * arr[i - 1] + r * arr[i - 2] + b;
	}

	cout << "–езультат:" << arr[n] << endl;
	return 0;
}