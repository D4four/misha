#include <iostream>
#include <locale>

using namespace std;

int main() {

	double m, x, y;

	setlocale(LC_ALL, "");

	cout << "������� ���������� ����� M:" << endl;
	cin >> x >> y;

	if (x == 0 && y == 0) {
		cout << "����� M �������� ������� ���������" << endl;
	}
	else if (x == 0) {
		cout << "����� M ����� �� ��� ������� 'Oy'" << endl;
	}
	else if (y == 0) {
		cout << "����� M ����� �� ��� ������� 'Ox'" << endl;
	} else if (x > 0 && y > 0) {
		cout << "����� M ����� � ������ ������������ ����" << endl;
	}
	else if (x > 0 && y < 0) {
		cout << "����� M ����� � ��������� ������������ ����" << endl;
	}
	else if (x < 0 && y < 0) {
		cout << "����� M ����� � ������� ������������ ����" << endl;
	}
	else if (x < 0 && y > 0) {
		cout << "����� M ����� �� ������ ������������ ����" << endl;
	}

	return 0;
}

