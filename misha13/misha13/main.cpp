#include <iostream>
#include <locale>
#include <vector>
#include <math.h>

//An = A1 + d(n-1);

using namespace std;

bool isSimpl(int el) {
	int cnt = 0;
	for (int i = 1; i <= el; i++) {
		if (el % i == 0) cnt++;
	}
	return cnt > 2 ? false : true;
}

vector<int> prosto(int x) {

	setlocale(LC_ALL, "");

	int temp, del;
	vector<int> arr;

	temp = x;
	del = x;

	while (temp > 1) {
		while (del > 1) {
			if (temp % del == 0 && isSimpl(del) == true) {
				arr.push_back(del);
				//cout << "del = " << del << endl;
				break;
			}
			del--;
		}
		temp /= del;
		del = temp;
		//cout << "del = " << del << endl;
	}

	/*for (int i = 0; i < arr.size(); i++) {
		cout << "DELITELI" << arr[i] << ' ';
	}*/

	//cout << "arr = " << arr.size() << endl;
	//arr.resize(arr.size(), 0xDEADC0DE);
	return arr;
}

int main() {

	setlocale(LC_ALL, "");

	int ch1, ch2, zn1, zn2, res1, res2, result = 1;

	cout << "¬ведите числитель и знаменатель первой дроби: " << endl;
	cin >> ch1 >> zn1;

	cout << "¬ведите числитель и знаменатель второй дроби: " << endl;
	cin >> ch2 >> zn2;
	res2 = zn1 * zn2;
	res1 = ch1*(res2/zn1) + ch2*(res2/zn2);

	vector<int> res1Nod = prosto(res1);
	vector<int> res2Nod = prosto(res2);
	vector<int> res;

	for (int i = 0; i < res1Nod.size(); i++) {
		for (int j = 0; j < res2Nod.size(); j++) {
			if (res1Nod[i] == res2Nod[j]) {
				res.push_back(res1Nod[i]);
				break;
			}
		}
	}

	for (int i = 0; i < res.size(); i++) {
		result *= res[i];
	}


	res1 /= result;
	res2 /= result;

	cout << res1 << "/" << res2 << endl;

	return 0;
}
