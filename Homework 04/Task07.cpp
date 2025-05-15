//7. С клавиатуры вводится целое число. Определить, просто ли оно. Простое число делится без остатка только на 1 и на самое себя.

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

	for (int i = 2; i < num; i++) {
		if (num % i == 0) {
			cout << "Не простое" << "\n";
			return 0;
		}
	}
	cout << "Простое" << "\n";

	cout << "\n\n" << string(55, '=') << "\n";

	return 0;
}
