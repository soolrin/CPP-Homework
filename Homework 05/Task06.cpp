//6. Создать массив из 20 случайных чисел в диапазоне от -10 до 30.
// Определить сумму элементов массива после первого отрицательного элемента.

#include <iostream>
#include <windows.h>
using namespace std;

int main() {

	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	srand(time(0));
	rand();

	const int size = 20;
	int arr[size]{};
	int sum = 0;
	bool firstNegative = false;

	for (int i = 0; i < size; i++)
		arr[i] = rand() % 41 - 10;

	cout << "\nВесь массив:\n";

	for (int i = 0; i < size; i++) {
		cout << arr[i] << ' ';

		if (firstNegative)
			sum += arr[i];
		else if (arr[i] < 0)
			firstNegative = true;
	}

	if (!firstNegative)
		cout << "\nВ массиве нет отрицательных элементов.\n";

	cout << "\n\nСумма чисел: " << sum;

	cout << "\n\n" << string(55, '=') << "\n";

	return 0;
}

