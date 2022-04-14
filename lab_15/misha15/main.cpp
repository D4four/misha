#include <iostream>
#include <locale>
#include <vector>
#include <map>
#include <Windows.h>
#include <math.h>

// y = x^10 + 2x^9 + 3x^8 + ... + 10x + 11

using namespace std;

int main() {

	setlocale(LC_ALL, "");

	SetConsoleCP(1251); // вывод
	SetConsoleOutputCP(1251); // ввод
	
	int d, m, res, sum = 0, fd;
	string fday;
	map<int, int> dayM;
	map<int, string> dayW;

	for (int i = 1; i <= 12; i++) {
		if (i == 1 || i == 3 || i == 5 || i == 7 || i == 8 || i == 10 || i == 12) {
			dayM[i] = 31;
		}
		else if (i == 2) {
			dayM[i] = 28;
		}
		else {
			dayM[i] = 30;
		}
	}

	dayW[1] = "понедельник";
	dayW[2] = "вторник";
	dayW[3] = "среда";
	dayW[4] = "четверг";
	dayW[5] = "п€тница";
	dayW[6] = "суббота";
	dayW[7] = "воскресенье";

	cout << "¬ведите день на который приходитс€ 1-ое €нвар€: ";
	cin >> fday;
	cout << "¬ведите дату" << endl;
	cout << "„исло: ";
	cin >> d;
	cout << "ћес€ц(номер): ";
	cin >> m;

	sum = d - 1;

	map <int, int> ::iterator itM = dayM.begin();
	for (int i = 1; i < m; itM++, i++) {
		sum += itM->second;
	}

	map <int, string> ::iterator itW;
	for (itW = dayW.begin(); itW != dayW.end(); itW++) {
		if (itW->second == fday) {
			fd = itW->first;
		}
	}

	res = (sum + fd) % 7;

	for (itW = dayW.begin(); itW != dayW.end(); itW++) {
		if (itW->first == res) {
			cout << itW->second;
		}
	}

	return 0;
}

//1  2  3  4  5  6  7
//8  9  10 11 12 13 14
//15 16 17 18 19 20 21
//22 23 24 25 26 27 28
//29 30 31
