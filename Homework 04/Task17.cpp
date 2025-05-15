//17. Пользователь вводит дату(по отдельности день, месяц, год).Определить день недели, соответствующий введенной дате.

#include <iostream>
#include <windows.h>
#include <iomanip>
using namespace std;

int main() {

	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	int day, month, year;
	bool leapYear;

	while (true) {

		cout << "Введите день: ";
		cin >> day;
		cout << "Введите месяц: ";
		cin >> month;
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


		int maxDays = 0;
		switch (month) {
		case 2:
			maxDays = leapYear ? 29 : 28;
			break;
		case 4: case 6: case 9: case 11:
			maxDays = 30;
			break;
		case 1: case 3: case 5: case 7: case 8: case 10: case 12:
			maxDays = 31;
			break;
		default:
			cout << "Такого месяца не существует. Повторите.\n";
			continue;
		}

		if (day < 1 || day > maxDays) {
			cout << "В этом месяце нет такого дня. Повторите.\n";
			continue;
		}
		break;
	}

	int totalDay = 0;

	for (int pastY = 1583; pastY < year; pastY++)
		totalDay += (pastY % 4 == 0 && pastY % 100 != 0) || pastY % 400 == 0 ? 366 : 365;

	for (int pastM = 1; pastM < month; pastM++) {
		if (pastM == 2)
			totalDay += leapYear ? 29 : 28;
		else if (pastM == 4 || pastM == 6 || pastM == 9 || pastM == 11)
			totalDay += 30;
		else
			totalDay += 31;
	}

	totalDay += day;
	int weekday = (totalDay - 1) % 7;

	cout << "\nВведенная дата: "
		<< setw(2) << setfill('0') << day << "."
		<< setw(2) << setfill('0') << month << "."
		<< year << "\n";
	cout << "День недели в эту дату был: ";

	switch (weekday) {
	case 0: cout << "Суббота"; break;
	case 1: cout << "Воскресенье"; break;
	case 2: cout << "Понедельник"; break;
	case 3: cout << "Вторник"; break;
	case 4: cout << "Среда"; break;
	case 5: cout << "Четверг"; break;
	case 6: cout << "Пятница"; break;
	}

	cout << "\n\n" << string(55, '=') << "\n";

	return 0;
}

