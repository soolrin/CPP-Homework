// 16. Дан двумерный массив размерностью M x N, заполненный случайными
// числами из диапазона от -10 до 10. Определить количество положительных,
// отрицательных и нулевых элементов.

#include <iostream>
#include <windows.h>
#include <iomanip>

using namespace std;

#define LIMEGREEN_TEXT  "\033[38;2;50;205;50m"   // Лаймово-зелёный
#define LIGHTCORAL_TEXT "\033[38;2;240;128;128m" // Светлый коралл
#define RED_TEXT        "\033[38;2;255;0;0m"     // Красный
#define YELLOW_TEXT     "\033[38;2;255;255;0m"   // Жёлтый
#define RESET           "\033[0m"                // Сброс цвета

int main() {
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	srand(time(0));
	rand();

	const int ROWS = 5;
	const int COLS = 7;

	int arr[ROWS][COLS]{};
	int positive = 0;
	int negative = 0;
	int zero = 0;

	// Ставит слово сверху, по центру массива
	cout << RED_TEXT << setw(4 * COLS / 2 + 4)
		<< "Массив" << "\n" << LIGHTCORAL_TEXT;

	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			arr[i][j] = rand() % 21 - 10;
			cout << setw(4) << arr[i][j];

			if (arr[i][j] > 0)         positive++;
			else if (arr[i][j] < 0)    negative++;
			else                       zero++;
		}

		cout << "\n";
	}

	cout << LIMEGREEN_TEXT << "\nКоличество положительных чисел: "
		<< YELLOW_TEXT << positive << "\n";

	cout << LIMEGREEN_TEXT << "\nКоличество отрицательных чисел: "
		<< YELLOW_TEXT << negative << "\n";

	cout << LIMEGREEN_TEXT << "\nКоличество нулевых чисел: "
		<< YELLOW_TEXT << zero << "\n" << RESET;

	cout << "\n\n" << string(55, '=') << "\n";

	return 0;
}
