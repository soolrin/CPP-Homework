//2. Создать массив из 20 случайных чисел.
// Вывести все элементы массива с четными индексами.

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


	for (int i = 0; i < size; i++)
		arr[i] = rand();

	cout << "Элементы массива с четными индексами\n";

	for (int i = 0; i < size; i++) {
		if (i % 2 == 0)
			cout << arr[i] << " ";
	}

	cout << "\n\nЭлементы массива с не четными индексами\n";

	for (int i = 0; i < size; i++) {
		if (i % 2 != 0)
			cout << arr[i] << " ";
	}

	cout << "\n\n" << string(55, '=') << "\n";

	return 0;
}

