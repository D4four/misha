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
	cout << "������� ��� ����� �������������� ����������:" << endl;
	cin >> a1 >> a2;

	d = a2 - a1;

	cout << "������� �������������� �����:" << endl;
	cin >> item;

	while (count < item) {
		count = a1 + d*(n - 1);
		n++;
	}

	if (count == item) {
		cout <<  item << " ��������� " << n-1 << "-�� ������ ������ ����������" << endl;
	}
	else {
		cout << item << "�� ��������� ������ ������ ����������" << endl;
	}

	return 0;
}