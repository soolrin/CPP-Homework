//12. Даны 2 массива размера M и N соответственно. Переписать в третий
// массив общие элементы двух первых массивов без повторений.

#include <iostream>
#include <windows.h>
using namespace std;

#define DARKCYAN_TEXT  "\033[38;2;0;139;139m"   // Темно-циановый
#define TURQUOISE_TEXT "\033[38;2;0;180;180m"   // Бирюзовый
#define CYAN_TEXT      "\033[38;2;0;250;250m"   // Циан
#define RED_TEXT       "\033[38;2;255;0;0m"     // Красный
#define RESET          "\033[0m"                // Сброс цвета


int main() {

	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	srand(time(0));
	rand();

	const int SIZE_ARR = 100;

	int arr1[SIZE_ARR]{};
	int arr2[SIZE_ARR]{};
	int arr3[SIZE_ARR]{};
	int currentIndex = 0;

	// Заполнение массивов случайными числами
	for (int i = 0; i < SIZE_ARR; i++) {
		arr1[i] = rand() % 201;
		arr2[i] = rand() % 201;
	}

	// Вывод первого массива
	cout << TURQUOISE_TEXT << "Массив №1:\n" << RESET;
	for (int i = 0; i < SIZE_ARR; i++) {
		cout << DARKCYAN_TEXT << arr1[i] << RESET << ", ";
	}

	// Вывод второго массива
	cout << TURQUOISE_TEXT << "\n\nМассив №2:\n " << RESET;
	for (int i = 0; i < SIZE_ARR; i++) {
		cout << DARKCYAN_TEXT << arr2[i] << RESET << ", ";
	}

	// Поиск общих элементов без повторений
	for (int i = 0; i < SIZE_ARR; i++) {
		for (int j = 0; j < SIZE_ARR; j++) {
			if (arr1[i] == arr2[j]) {
				// Проверка на повтор
				bool repeated = false;
				for (int k = 0; k < currentIndex; k++) {
					if (arr3[k] == arr1[i]) {
						repeated = true;
						break;
					}
				}
				if (!repeated) {
					arr3[currentIndex++] = arr1[i];
				}
				break; // Не нужно искать дальше
			}
		}
	}

	// Вывод третьего массива
	cout << TURQUOISE_TEXT << "\n\nМассив №3(Общие элементы):\n" << RESET;
	if (currentIndex == 0) {
		cout << RED_TEXT << "Нет общих элементов." << RESET;
	}
	else {
		for (int i = 0; i < currentIndex; i++) {
			cout << CYAN_TEXT << arr3[i] << RESET << ", ";
		}
	}

	cout << "\n\n" << string(55, '=') << "\n";

	return 0;
}

