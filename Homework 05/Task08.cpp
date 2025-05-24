//8. Создать массив из 20 случайных чисел.
// Определить Минимальные и максимальные элементы массива
// (вывести значение и порядковый номер).

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

	cout << "\nВесь массив:\n";

	for (int i = 0; i < size; i++) {

		arr[i] = rand() % 51;
		cout << arr[i] << ' ';
	}

	int indexMax = 0;
	int indexMin = 0;

	for (int i = 0; i < size; i++) {

		if (arr[i] > arr[indexMax])
			indexMax = i;
		if (arr[i] < arr[indexMin])
			indexMin = i;
	}

	cout << "\n\nМинимальное значение: " << arr[indexMin] << ", его порядковый номер: " << indexMin + 1;
	cout << "\nМаксимальное значение: " << arr[indexMax] << ", его порядковый номер: " << indexMax + 1;


	cout << "\n\n" << string(55, '=') << "\n";

	return 0;
}

