#include <iostream>
#include <locale>

using namespace std;

int main() {

	setlocale(LC_ALL, "");

	int x, temp = 1, cnt = 1; 

	cout << "������� �����: " << endl;
	cin >> x;

	while (temp < x) {
		temp = temp * (cnt + 1);
		cnt++;
	}

	if (x == 1) {
		cout << x << " �������� ����������� 0 � 1" << endl;
	}
	else {
		if (temp == x) {
			cout << x << " �������� ����������� " << cnt << endl;
		}
		else {
			cout << x << " �� �������� ����������� ������ ���� �����" << endl;
		}
	}
	

	return 0;
}