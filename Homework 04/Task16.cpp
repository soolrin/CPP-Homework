//16. Показать на экране все числа Фибоначчи в диапазоне от 0 до 10.000.000.

#include <iostream>
#include <windows.h>
using namespace std;

int main() {
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	int num1 = 0, num2 = 0, num3 = 1;
	while (num1 < 10000000) {
		cout << num1 << " | ";
		num2 = num1 + num3;
		num1 = num3;
		num3 = num2;
	}

	cout << "\n\n" << string(55, '=') << "\n";

	return 0;
}
