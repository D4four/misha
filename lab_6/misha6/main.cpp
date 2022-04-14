#include <iostream>
#include <locale>
#include <vector>

// y = x^10 + 2x^9 + 3x^8 + ... + 10x + 11

using namespace std;

int main() {

	setlocale(LC_ALL, "");

	int x;
	int long res = 0;

	cout << "¬ведите x: " << endl;
	cin >> x;

	vector<int> koff;

	for (int i = 1; i <= 11; i++) {
		koff.push_back(i);
	}

	for (int i = 0; i < 11; i++) {
		res = res * x + koff[i];
	}

	cout << "Result: " << res << endl;

	return 0;
}