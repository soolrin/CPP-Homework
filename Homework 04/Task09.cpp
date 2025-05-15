//9. Определить, является ли введенное число палиндромом.
// Палиндром — это число, которое одинаково читается как слева направо,
// так и справа налево, например 1234321.
// В этой задаче (как и в других задачах) нельзя использовать строки и списки.

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
	int originalNum = num;
	int flipNum = 0;

	if (num < 10) {
		cout << "Число является палиндромом";
	}
	else {
		while (num > 0) {
			flipNum *= 10;
			flipNum += num % 10;
			num /= 10;
		}
		if (originalNum == flipNum)
			cout << "Число является палиндромом";
		else
			cout << "Число не является палиндромом";
	}

	cout << "\n\n" << string(55, '=') << "\n";

	return 0;
}