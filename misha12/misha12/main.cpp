#include <iostream>
#include <locale>
#include <vector>
#include <math.h>

//An = A1 + d(n-1);

using namespace std;

int main() {

	setlocale(LC_ALL, "");

	int x, temp = 1, cnt = 1; 

	cout << "������� �����: " << endl;
	cin >> x;

	while (temp < x) {
		temp = temp * (cnt + 1);
		cout << temp << endl;
		cnt++;
	}

	if (temp == x) {
		cout << x << " �������� ����������� " << cnt << endl;
	}
	else {
		cout << x << " �� �������� ����������� ������ ���� �����" << endl;
	}

	return 0;
}