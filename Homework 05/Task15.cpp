// 15. Дан двумерный массив размерностью M x M, заполненный случайными
// числами из диапазона от 0 до 20. Определить сумму элементов,
// расположенных на главной диагонали, а также сумму элементов,
// расположенных на побочной диагонали.

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

	const int SIZE_ARR = 5;

	int arr[SIZE_ARR][SIZE_ARR]{};
	int sumMainD = 0;
	int sumSideD = 0;

	// Ставит слово сверху, по центру массива
	cout << RED_TEXT << setw(4 * SIZE_ARR / 2 + 4)
		<< "Массив" << "\n" << LIGHTCORAL_TEXT;

	for (int i = 0; i < SIZE_ARR; i++)
	{
		for (int j = 0; j < SIZE_ARR; j++)
		{
			arr[i][j] = rand() % 21;
			cout << setw(4) << arr[i][j];
		}
		sumMainD += arr[i][i];
		sumSideD += arr[i][SIZE_ARR - i - 1];
		cout << "\n";
	}

	cout << LIMEGREEN_TEXT << "\nСумма элементов главной диагонали: "
		<< YELLOW_TEXT << sumMainD << "\n";

	cout << LIMEGREEN_TEXT << "\nСумма элементов побочной диагонали: "
		<< YELLOW_TEXT << sumSideD << "\n" << RESET;

	cout << "\n\n" << string(55, '=') << "\n";

	return 0;
}