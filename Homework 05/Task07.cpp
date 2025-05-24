//7. Создать массив из 20 случайных чисел в диапазоне от -30 до 10.
// Определить сумму элементов массива, находящихся до первого положительного элемента.

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


	cout << "\nВесь массив:\n";
	for (int i = 0; i < size; i++) {

		arr[i] = rand() % 41 - 30;
		cout << arr[i] << ' ';
	}

	for (int i = 0; i < size; i++) {

		if (arr[i] > 0)
			break;
		sum += arr[i];
	}

	cout << "\n\nСумма элементов до первого положительного: " << sum;

	cout << "\n\n" << string(55, '=') << "\n";

	return 0;
}

