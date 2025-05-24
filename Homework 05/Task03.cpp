//3. Создать массив из 10 случайных чисел в диапазоне от -20 до 20.
// Определить количество, сумму и среднее арифметическое положительных элементов массива.

#include <iostream>
#include <windows.h>
using namespace std;

int main() {

	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	srand(time(0));
	rand();


	const int size = 10;
	int arr[size]{};

	int quantity = 0;
	int sum = 0;
	float avgPos = 0;

	for (int i = 0; i < size; i++)
		arr[i] = rand() % 41 - 20;

	cout << "Элементы массива\n";

	for (int i = 0; i < size; i++) {
		cout << arr[i] << ", ";
		if (arr[i] > 0) {
			quantity++;
			sum += arr[i];
		}
	}
	avgPos = (quantity) ? (float)sum / quantity : 0;

	cout << "\n\nКоличество положительных элементов: " << quantity << "\n"
		<< "Сумма этих элементов: " << sum << "\n"
		<< "Среднее арифметическое: " << avgPos << "\n";

	cout << "\n\n" << string(55, '=') << "\n";

	return 0;
}

