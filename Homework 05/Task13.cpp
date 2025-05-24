// 13. Реализовать программу - лотерею.Программа загадывает 5 случайных неповторяющихся
// чисел в диапазоне от 1 до 42, но не показывает их на экран.Пользователь вводит свои 5 чисел.
// Приз: 3 совпадения - 100 кредитов, 4 - 500 кредитов, 5 - 2500 кредитов.
// Какова вероятность угадать все 5 чисел ?

#include <iostream>
#include <windows.h>
using namespace std;

#define LIME_TEXT       "\033[38;2;0;255;0m"     // Лайм
#define LIMEGREEN_TEXT  "\033[38;2;50;205;50m"   // Лаймово-зелёный
#define LIGHTCORAL_TEXT "\033[38;2;240;128;128m" // Светлый коралл
#define DARKRED_TEXT    "\033[38;2;139;0;0m"     // Темно-красный
#define RED_TEXT        "\033[38;2;255;0;0m"     // Красный
#define YELLOW_TEXT     "\033[38;2;255;255;0m"   // Жёлтый
#define RESET           "\033[0m"                // Сброс цвета


int main() {
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	srand(time(0));
	rand();

	const int SIZE_ARR = 5;
	int randNum[SIZE_ARR];
	int userNum[SIZE_ARR];

	// Генерация 5 уникальных чисел
	for (int i = 0; i < SIZE_ARR;) {
		int num = rand() % 42 + 1;
		bool unique = true;
		for (int j = 0; j < i; j++) {
			if (randNum[j] == num) {
				unique = false;
				break;
			}
		}
		if (unique) {
			randNum[i] = num;
			i++;
		}
	}

	// Ввод чисел пользователем
	cout << LIMEGREEN_TEXT << "Введите 5 уникальных чисел (1-42):\n";
	for (int i = 0; i < SIZE_ARR;) {
		cout << LIME_TEXT << "Число " << i + 1 << ": ";
		int num;
		cout << YELLOW_TEXT;
		cin >> num;

		if (num < 1 || num > 42) {
			cout << RED_TEXT << "Ошибка:" << DARKRED_TEXT << " Введите число от 1 до 42\n";
			continue;
		}

		bool unique = true;
		for (int j = 0; j < i; j++) {
			if (userNum[j] == num) {
				unique = false;
				break;
			}
		}

		if (!unique) {
			cout << RED_TEXT << "Число уже было: "<< DARKRED_TEXT << "Повторите ввод\n";
			continue;
		}

		userNum[i] = num;
		i++;
	}

	// Совпадения
	int counter = 0;
	for (int i = 0; i < SIZE_ARR; i++) {
		for (int j = 0; j < SIZE_ARR; j++) {
			if (randNum[i] == userNum[j]) {
				counter++;
				break;
			}
		}
	}

	// Вывод результата
	cout << LIME_TEXT << "\nКоличество совпадений: " << YELLOW_TEXT << counter << "\n";
	if (counter == 5) {
		cout << LIME_TEXT << "Поздравляем! Вы выиграли " << YELLOW_TEXT << 2500 << LIME_TEXT << " кредитов!\n";
	}
	else if (counter == 4) {
		cout << LIME_TEXT << "Поздравляем! Вы выиграли " << YELLOW_TEXT << 500 << LIME_TEXT << " кредитов!\n";
	}
	else if (counter == 3) {
		cout << LIME_TEXT << "Поздравляем! Вы выиграли " << YELLOW_TEXT << 100 << LIME_TEXT << " кредитов!\n";
	}
	else {
		cout << LIGHTCORAL_TEXT << "К сожалению, вы ничего не выиграли.\n";
	}

	// Расчёт вероятности
	long long total = (42 * 41 * 40 * 39 * 38) / (5 * 4 * 3 * 2 * 1);
	double chance = (1.0 / total) * 100.0;

	cout << LIMEGREEN_TEXT << "\nВероятность угадать все 5 чисел: " << YELLOW_TEXT << chance << "%\n" << RESET;

	cout << "\n\n" << string(55, '=') << "\n";

	return 0;
}

