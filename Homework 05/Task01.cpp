//1. Ввести массив из 5 чисел, затем вывести его в обратном порядке.

#include <iostream>
#include <windows.h>
using namespace std;

int main() {

	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	const int size = 5;
	int arr[size] = { 1, 2, 3, 4, 5 };

	cout << "Введите " << size << " чисел:\n";

	for (int i = 0; i < size; i++)
		cin >> arr[i];

	cout << "\n";

	for (int i = 0; i < size; i++)
		cout << arr[i] << " ";

	cout << "\n";

	for (int i = size - 1; i >= 0; i--)
		cout << arr[i] << " ";

	cout << "\n\n" << string(55, '=') << "\n";

	return 0;
}

