//7. Ввести с клавиатуры два 3 - значных числа и поменять в них средние цифры(например, ввести 357 и 702 – получить и вывести числа 307 и 752).

#include <windows.h>
#include <iostream>
#include <string>
using namespace std;


int main() {
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	int num1, num2;

	cout << "Введите первое число: ";
	cin >> num1;

	cout << "Введите второе число: ";
	cin >> num2;

	int temp = num1 % 100 - num1 % 10;

	num1 -= temp;
	num1 += num2 % 100 - num2 % 10;
	num2 -= num2 % 100 - num2 % 10;
	num2 += temp;

	cout << "\nПервое число стало: " << num1 << "\n";
	cout << "Второе число стало: " << num2 << "\n";

	return 0;
}
