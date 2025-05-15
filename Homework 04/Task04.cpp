//4. Написать программу, вычисляющую факториал введенного числа.

#include <iostream>
#include <windows.h>
using namespace std;

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	short num;
	unsigned long long factorial = 1;

	cout << "Факториал какого числа вы хотите узнать? (До 20) : ";
	cin >> num;

	if (num == 0 || num == 1) {
		cout << "Факториал числа " << num << "! = 1";
	}
	else if (num > 1 && num < 20) {     // 20! уже больше 2 в 64й степени
		for (int i = 1; i <= num; i++) {
			factorial *= i;
		}
		cout << "\nФакториал числа " << num << "! = " << factorial;
	}
	else if (num >= 20) {
		cout << "Факториал числа " << num << "! (выходит за пределы диапазона типа unsigned long long).";
	}
	else {
		cout << "Введенное число не является положительным целым числом";
	}

	cout << "\n\n" << string(55, '=') << "\n";

	return 0;
}
