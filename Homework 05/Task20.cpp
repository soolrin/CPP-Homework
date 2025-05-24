// 20. Дан двумерный массив размерностью M x N,
// заполненный случайными числами из диапазона от -100 до 100.
// Определить сумму элементов массива, расположенных
// между минимальным и максимальным элементами.

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

	const int ROWS = 7;
	const int COLS = 5;

	int arr[ROWS][COLS]{};

	// Заполнение массива
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			arr[i][j] = rand() % 201 - 100;
		}
	}

	int maxNum = arr[0][0];
	int minNum = arr[0][0];
	int sum = 0; 
	int posMax = 0;
	int posMin = 0;

	// Нахождение минимального и максимального значения
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			// Преобразование координат в линейные позиции
			if (maxNum < arr[i][j])
			{
				maxNum = arr[i][j];
				posMax = i * COLS + j;

			}
			if (minNum > arr[i][j])
			{
				minNum = arr[i][j];
				posMin = i * COLS + j;
			}
		}
	}

	// Нахождение границ
	int start = (posMin < posMax) ? posMin + 1 : posMax + 1;
	int end = (posMin > posMax) ? posMin - 1 : posMax - 1;


	// Ставит слово сверху, по центру массива
	cout << RED_TEXT << setw(5 * COLS / 2 + 5)
		<< "Массив" << "\n";

	// Вывод массива и подсчёт суммы
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			// Нахождение текущей линейной позиции
			int currentPos = i * COLS + j;

			// Окрашивание максимального и минимального значения
			if (currentPos == posMax || currentPos == posMin)
			{
				cout << LIMEGREEN_TEXT << setw(5) << arr[i][j];
				continue;
			}

			cout << LIGHTCORAL_TEXT << setw(5) << arr[i][j];

			// Суммирование элементов, не включая максимальное и минимальное
			if (currentPos >= start && currentPos <= end)
			{
				sum += arr[i][j];
			}
		}
		cout << "\n";
	}

	// Вывод результатов
	cout << LIMEGREEN_TEXT << "\nМинимальный элемент: "<< YELLOW_TEXT << minNum << "\n";
	cout << LIMEGREEN_TEXT << "Максимальный элемент: " << YELLOW_TEXT << maxNum << "\n";
	cout << LIMEGREEN_TEXT << "Сумма между элементами: " << YELLOW_TEXT << sum << RESET;

	cout << "\n\n" << string(55, '=') << "\n";

	return 0;
}