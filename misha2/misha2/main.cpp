#include <iostream>
#include <locale>

using namespace std;

int main() {

	setlocale(LC_ALL, "");

	double a, b, alpha;

	cout << "������� ������� a � b:" << endl;
	cin >> a >> b;

	cout << "������� ���� ����� a � b:" << endl;
	cin >> alpha;

	if (a == b && (int(alpha) % 90 == 0)) {
		cout << "�������������� ������� ���������" << endl;
	}
	else if (a == b) {
		cout << "�������������� ������� ������" << endl;
	}
	else if ((int(alpha) % 90 == 0)) {
		cout << "�������������� ������� ���������������" << endl;
	}
	else {
		cout << "��������������" << endl;
	}

	return 0;
}