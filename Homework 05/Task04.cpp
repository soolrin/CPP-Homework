//4. Создать символьный массив из 100 случайных элементов.
// Определить, сколько в нем цифр, букв и знаков препинания.

#include <iostream>
#include <windows.h>
using namespace std;

int main() {

	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	srand(time(0));
	rand();

	const int size = 100;
	char arr[size]{};

	int digitCount = 0;
	int letterCount = 0;
	int punctuationCount = 0;

	for (int i = 0; i < size; i++)
		arr[i] = rand() % 94 + 33;

	cout << "Символьный массив:\n";

	for (int i = 0; i < size; i++) {
		cout << arr[i] << ' ';

		if (arr[i] >= '0' && arr[i] <= '9')
			digitCount++;

		else if ((arr[i] >= 'A' && arr[i] <= 'Z') || (arr[i] >= 'a' && arr[i] <= 'z'))
			letterCount++;

		else
			punctuationCount++;
	}

	cout << "\n\nЦифр: " << digitCount << "\n"
		<< "Букв: " << letterCount << "\n"
		<< "Знаков препинания: " << punctuationCount << "\n";

	cout << "\n\n" << string(55, '=') << "\n";

	return 0;
}

