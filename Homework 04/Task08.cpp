//8. Проверить, есть ли во введенном числе одинаковые цифры подряд.

#include <iostream>
#include <windows.h>
using namespace std;

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	long long num;
	cout << "Введите число: ";
	cin >> num;

	num = abs(num);

	if (num < 10) {
		cout << "Введите число больше 10";
	}
	else {
		int temp = num % 10;
		num /= 10;

		while (num > 0) {
			if (temp == num % 10) {
				cout << "Есть одинаковые цифры подряд";
				cout << "\n\n" << string(55, '=') << "\n";
				return 0;
			}
			temp = num % 10;
			num /= 10;
		}
		cout << "Нет одинаковых цифр подряд";

		cout << "\n\n" << string(55, '=') << "\n";

		return 0;
	}
}