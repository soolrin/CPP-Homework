//3. Заказать случайным образом 100 целых чисел в диапазоне от - 100 до 100.
// Вычислить процент положительных чисел, процент отрицательных чисел и процент нулей,
// а также четных чисел и процент нечетных.

#include <iostream>
#include <windows.h>
using namespace std;

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	srand(time(0));
	rand();

	int positive = 0;
	int negative = 0;
	int zero = 0;
	int even = 0;
	int odd = 0;


	for (int i = 0; i < 100; i++) {
		int num = rand() % 201 - 100;

		if (num > 0)
			positive++;
		else if (num < 0)
			negative++;
		else
			zero++;

		if (num % 2 == 0)
			even++;
		else
			odd++;
	}

	cout << "Процент положительных чисел: " << (float)positive / 100 * 100 << "%\n";
	cout << "Процент отрицательных чисел: " << (float)negative / 100 * 100 << "%\n";
	cout << "Процент четных чисел: " << (float)even / 100 * 100 << "%\n";
	cout << "Процент нечетных чисел: " << (float)odd / 100 * 100 << "%\n";
	cout << "Процент нулей: " << (float)zero / 100 * 100 << "%\n";

	cout << "\n\n" << string(55, '=') << "\n";

	return 0;
}
