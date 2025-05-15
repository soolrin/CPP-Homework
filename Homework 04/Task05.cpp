//5. С клавиатуры вводится целое число хоть какой разрядности.Определить количество цифр в нем и их сумму.

#include <iostream>
#include <windows.h>
using namespace std;

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	long long num;
	int sum = 0;
	int counter = 0;

	cout << "Введите число: ";
	cin >> num;

	if (num == 0) {
		counter++;
	}
	else {
		while (true) {
			if (num == 0)
				break;
			sum += num % 10;
			num /= 10;
			counter++;
		}
	}
	cout << "Количество цифр в числе = " << counter << "\n";
	cout << "Сумма цифр введенного числа = " << sum << "\n";

	cout << "\n\n" << string(55, '=') << "\n";

	return 0;
}
