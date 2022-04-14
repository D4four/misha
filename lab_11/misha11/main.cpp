#include <iostream>
#include <locale>
#include <vector>

using namespace std;

int main() {

	setlocale(LC_ALL, "");

	int x; int cnt = 0;
	int max = INT_MIN;
	vector<int> arr;

	cout << "¬ведите число: " << endl;
	cin >> x;

	while (x > 1) {
		arr.push_back(x % 10);
		x /= 10;
	}

	for (int i = 0; i < arr.size(); i++) {
		if (arr[i] > max) {
			max = arr[i];
		}
	}

	for (int i = 0; i < arr.size(); i++) {
		if (arr[i] == max) {
			cnt++;
		}
	}

	cout << "„исло " << max << " встречаетьс€ " << cnt << " раз";

	return 0;
}