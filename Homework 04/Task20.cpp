//20. Показать на экране 4 фигуры (поочередно, сверху вниз) из 36 слайдов презентации.

#include <iostream>
#include <windows.h>
using namespace std;

int main() {

	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	int size;
	cout << "Введите размер: ";
	cin >> size;

	if (size % 2 == 0) {
		cout << "Размер должен быть нечетным!" << "\n";
		return 0;
	}

	//Фигура 1
	for (int i = 0; i < size; i++) {
		if (i == 0 || i == size - 1) {
			cout << string(size, '*') << "\n";
		}
		else if (i < size / 2) {
			cout << "*" << string(i - 1, ' ');
			cout << "*" << string(size - i - i - 2, ' ');
			cout << "*" << string(i - 1, ' ');
			cout << "*" << "\n";
		}
		else if (i > size / 2) {
			cout << "*" << string(size - i - 2, ' ');
			cout << "*" << string(i + i - size, ' ');
			cout << "*" << string(size - i - 2, ' ');
			cout << "*" << "\n";
		}
		else {
			cout << "*" << string(size / 2 - 1, ' ');
			cout << "*" << string(size / 2 - 1, ' ') << "*" << "\n";
		}
	}

	cout << "\n";

	//Фигура 2
	for (int i = 0, j = 0; i < size; i++)
	{
		if (i == 0 || i == size - 1) {
			cout << string(size / 2, ' ') << "*" << "\n";
		}
		else if (i <= size / 2 - 1) {
			cout << string(size / 2 - i, ' ') << "*";
			cout << string(i + i - 1, ' ') << "*" << "\n";
		}
		else if (i >= size / 2) {
			cout << string(i - size / 2, ' ') << "*";
			cout << string((size - i - 1) * 2 - 1, ' ') << "*" << "\n";
		}

	}

	cout << "\n";

	//Фигура 3
	for (int i = 0; i < size; i++) {

		if (i == 0)
			cout << string(size / 2 + 1, '*') << "\n";
		else if (i == size - 1)
			cout << string(size / 2, ' ') << string(size / 2 + 1, '*') << "\n";

		if (i >= 1 && i <= size / 2 - 1) {
			cout << "*" << string(i - 1, ' ');
			cout << "*" << "\n";
		}
		else if (i > size / 2 && i < size - 1) {
			cout << string(i, ' ') << "*";
			cout << string(size - i - 2, ' ');
			cout << "*" << "\n";
		}
		else if (i == size / 2) {
			cout << "*" << string(size / 2 - 1, ' ');
			cout << "*" << string(size / 2 - 1, ' ') << "*" << "\n";
		}
	}

	cout << "\n";

	//Фигура 4
	for (int i = 0; i < size; i++) {
		if (i == 0) {
			cout << " " << string(size / 2 - 1, '*') << "\n";
		}
		else if (i == size - 1) {
			cout << string(size / 2 + 1, ' ') << string(size / 2 - 1, '*') << "\n";
		}
		else if (i < size / 2) {
			cout << "*" << string(size / 2 - 1, ' ') << "*" << "\n";
		}
		else if (i == size / 2) {
			cout << " " << string(size / 2 - 1, '*') << " " << string(size / 2 - 1, '*') << "\n";
		}
		else if (i > size / 2) {
			cout << string(size / 2, ' ') << "*";
			cout << string(size / 2 - 1, ' ') << "*" << "\n";
		}
	}


	cout << "\n\n" << string(55, '=') << "\n";

	return 0;
}

