#include <iostream>
#include <locale>
#include <vector>
#include <math.h>

//An = A1 + d(n-1);

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
		//cout << "ostatoc: " << x % 10 << endl;
		x /= 10;
	}

	for (int i = 0; i < arr.size(); i++) {
		if (arr[i] > max) {
			max = arr[i];
			//cout << "Max: " << max << endl;
		}
	}

	for (int i = 0; i < arr.size(); i++) {
		if (arr[i] == max) {
			cnt++;
			//cout << "counetr: " << cnt<< endl;
		}
	}

	cout << "„исло " << max << " встречаетьс€ " << cnt << " раз";

	return 0;
}