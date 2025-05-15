//1. Вычислить сумму чисел в диапазоне от 1 до 10 циклов.

#include <iostream>
#include <windows.h>
using namespace std;

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	int sum = 0;
	for (int i = 1; i <= 10; i++) {
		sum += i;
	}
	cout << sum;

	cout << "\n\n" << string(55, '=') << "\n";

	return 0;
}
