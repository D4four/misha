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

	if (d > 0) {
		if (item > a2) {
			count = a2;
			while (count < item) {
				count += d;
			}

			if (count == item) {
				cout << item << " ��������� ������ ������ ����������" << endl;
			}
			else {
				cout << item << " �� ��������� ������ ������ ����������" << endl;
			}
		}
		else {
			count = item;
			while (count < a1) {
				count += d;
			}
			if (count == a1) {
				cout << item << " ��������� ������ ������ ����������" << endl;
			}
			else {
				cout << item << " �� ��������� ������ ������ ����������" << endl;
			}
		}
	}
	else {
		if (item < a2) {
			count = a2;
			while (count > item) {
				count += d;
			}

			if (count == item) {
				cout << item << " ��������� ������ ������ ����������" << endl;
			}
			else {
				cout << item << " �� ��������� ������ ������ ����������" << endl;
			}
		}
		else {
			count = item;
			while (count > a1) {
				count += d;
			}
			if (count == a1) {
				cout << item << " ��������� ������ ������ ����������" << endl;
			}
			else {
				cout << item << " �� ��������� ������ ������ ����������" << endl;
			}
		}
	}

	return 0;
}