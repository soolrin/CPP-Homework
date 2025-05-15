//6. С клавиатуры вводится целое число. Вывести на экран все числа, на которые введенное число делится без остатка.

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

	for (int i = 1; i <= num / 2; i++) {
		if (num % i == 0) {
			cout << i << "\n";
		}
	}
	cout << num;

	cout << "\n\n" << string(55, '=') << "\n";

	return 0;
}
