// 17. Дано двумерный массив размерностью M x N,
// заполненный случайными числами из диапазона от 0 до 20.
// Определить сумму по каждой строке и по каждому столбцу массива.

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

	// Ставит слово сверху, по центру массива
	cout << RED_TEXT << setw(4 * COLS / 2 + 4)
		<< "Массив" << "\n";

	// Заполняет и считает сумму строки
	for (int i = 0; i < ROWS; i++)
	{
		int sumX = 0;
		for (int j = 0; j < COLS; j++)
		{
			arr[i][j] = rand() % 21;
			cout << LIGHTCORAL_TEXT << setw(4) << arr[i][j];
			sumX += arr[i][j];
		}
		cout << YELLOW_TEXT << "   " << sumX;
		cout << "\n";
	}

	cout << "\n";
	// Считает сумму столбца
	for (int j = 0; j < COLS; j++)
	{
		int sumY = 0;
		for (int i = 0; i < ROWS; i++)
		{
			sumY += arr[i][j];
		}
		cout << YELLOW_TEXT << setw(4) << sumY << RESET;
	}

	cout << "\n\n" << string(55, '=') << "\n";

	return 0;
}