//18. Написать программу, которая генерирует и выводит календарь на любой год, указанный с клавиатуры.

#include <iostream>
#include <windows.h>
#include <iomanip>
using namespace std;

int main() {

	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	int year;
	bool leapYear;

	while (true) {

		cout << "Введите год: ";
		cin >> year;

		if (year < 1583) {
			cout << "Год должен быть не меньше 1583. Повторите попытку.\n";
			continue;
		}


		if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0)
			leapYear = true;
		else
			leapYear = false;

		break;
	}

	int totalDay = 0;

	for (int pastY = 1583; pastY < year; pastY++)
		totalDay += (pastY % 4 == 0 && pastY % 100 != 0) || pastY % 400 == 0 ? 366 : 365;


	int day = 0;
	int count;

	for (int pastM = 1; pastM <= 12; pastM++) {
		if (pastM == 2)
			day = leapYear ? 29 : 28;
		else if (pastM == 4 || pastM == 6 || pastM == 9 || pastM == 11)
			day = 30;
		else
			day = 31;

		string mName;

		switch (pastM) {
		case 1: mName = "Январь"; break;
		case 2: mName = "Февраль"; break;
		case 3: mName = "Март"; break;
		case 4: mName = "Апрель"; break;
		case 5: mName = "Май"; break;
		case 6: mName = "Июнь"; break;
		case 7: mName = "Июль"; break;
		case 8: mName = "Август"; break;
		case 9: mName = "Сентябрь"; break;
		case 10: mName = "Октябрь"; break;
		case 11: mName = "Ноябрь"; break;
		case 12: mName = "Декабрь"; break;
		}
		
		cout << "\n";
		cout << string(32, '=') << "\n";

		int length = (26 - mName.length()) / 2;
		cout << "|  "
			<< string(length, ' ') << mName << string(26 - length - mName.length(), ' ')
			<< "  |\n";

		cout << string(32, '=') << "\n";
		cout << "|  ";

		cout << left 
			<< setw(4) << "Пн"
			<< setw(4) << "Вт"
			<< setw(4) << "Ср"
			<< setw(4) << "Чт"
			<< setw(4) << "Пт"
			<< setw(4) << "Сб"
			<< setw(4) << "Вс"
			<< "|\n";

		cout << "|  ";

		int count = 0;

		for (int d = 1; d <= day; d++) {
			if (d == 1) {
				int dWeek = (totalDay + 5) % 7;
				cout << string(dWeek * 4, ' ');
				count = dWeek;
			}

			cout << setw(4) << left << d;
			count++;

			if (count % 7 == 0) {
				cout << "|";
				if (d != day) {
					cout << "\n|  ";
				}
				count = 0;
			}
		}

		if (count != 0)
			cout << string((7 - count) * 4, ' ') << "|" << "\n";
		else
			cout << "\n";

		cout << string(32, '=') << "\n";

		totalDay += day;
	}	

	cout << "\n\n" << string(55, '=') << "\n";

	return 0;
}

