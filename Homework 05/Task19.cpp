// 19. В двумерном массиве размерностью M x N
// поменять местами чётные строки с нечётными.

#include <iostream>
#include <windows.h>
#include <iomanip>

using namespace std;

#define LIMEGREEN_TEXT  "\033[38;2;50;205;50m"   // Лаймово-зелёный
#define LIGHTCORAL_TEXT "\033[38;2;240;128;128m" // Светлый коралл
#define RED_TEXT        "\033[38;2;255;0;0m"     // Красный
#define RESET           "\033[0m"                // Сброс цвета

int main() {
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	srand(time(0));
	rand();

	const int ROWS = 7;
	const int COLS = 5;

	int arr[ROWS][COLS]{};

	// Ставит слово сверху, по центру массива
	cout << RED_TEXT << setw(4 * COLS / 2 + 3)
		<< "Было" << "\n";

	// Заполнение и вывод массива
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			arr[i][j] = rand() % 21;

			// Делает чётные строки зелёными, а нечётные красными
			if (i % 2 == 0) 
				cout << LIMEGREEN_TEXT << setw(4) << arr[i][j];
			else 
				cout << LIGHTCORAL_TEXT << setw(4) << arr[i][j];
		}
		cout << "\n";
	}

	cout << "\n";
	cout << RED_TEXT << setw(4 * COLS / 2 + 4)
		<< "Стало" << "\n" << LIGHTCORAL_TEXT;

	// Обмен строк по индексу и вывод массива
	for (int i = 0; i < ROWS; i++)
	{
		// Можно было бы сделать i += 2, чтобы шло
		// только по чётным, но тогда пришлось бы добавить
		// ещё один цикл для вывода изменённого массива
		for (int j = 0; j < COLS; j++)
		{
			// Проверка строки на чётность и
			// наличие места для дальнейшей вставки
			if (i % 2 == 0 && i < ROWS - 1) {
				int temp = arr[i][j];
				arr[i][j] = arr[i + 1][j];
				arr[i + 1][j] = temp;
			}

			if (i % 2 != 0)
				cout << LIMEGREEN_TEXT << setw(4) << arr[i][j];
			else
				cout << LIGHTCORAL_TEXT << setw(4) << arr[i][j];
		}
		cout << "\n";
	}
	cout << RESET;

	cout << "\n\n" << string(55, '=') << "\n";

	return 0;
}