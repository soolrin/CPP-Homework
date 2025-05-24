// 14. Дан двумерный массив размерностью M x N, заполненный случайными числами
// из диапазона от 0 до 20. Определить сумму элементов массива,
// среднее арифметическое, минимальный и максимальный элемент.

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
	int sum = 0;

	// Эти значения выходят за границы 0 и 20,
	// и нужно это сделать, чтобы все выполнить в одном цикле
	int min = 22, max = -1;

	// Если нужна гибкость в изменении программы,
	// то второй вариант будет в комментариях.

	// Ставит слово сверху, по центру массива
	cout << RED_TEXT << setw(4 * COLS / 2 + 4)
		<< "Массив" << "\n" << LIGHTCORAL_TEXT;

	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			arr[i][j] = rand() % 21;

			sum += arr[i][j];
			if (max < arr[i][j]) max = arr[i][j];
			if (min > arr[i][j]) min = arr[i][j];

			cout << setw(4) << arr[i][j];
		}
		cout << "\n";
	}


	// Второй гибкий вариант - если менять диапазоны
	//max = arr[0][0];
	//min = arr[0][0];
	//for (int i = 0; i < ROWS; i++)
	//{
	//	for (int j = 0; j < COLS; j++)
	//	{
	//		sum += arr[i][j];
	//		if (max < arr[i][j]) max = arr[i][j];
	//		if (min > arr[i][j]) min = arr[i][j];
	//	}
	//}


	float average = (float)sum / (ROWS * COLS);

	cout << fixed << setprecision(2);

	cout << LIMEGREEN_TEXT << "\nСумма элементов массива: "
		<< YELLOW_TEXT << sum << "\n";

	cout << LIMEGREEN_TEXT << "Среднее арифметическое: "
		<< YELLOW_TEXT << average << "\n";

	cout << LIMEGREEN_TEXT << "Минимальный элемент: "
		<< YELLOW_TEXT << min << "\n";

	cout << LIMEGREEN_TEXT << "Максимальный элемент: "
		<< YELLOW_TEXT << max << "\n" << RESET;

	cout << "\n\n" << string(55, '=') << "\n";

	return 0;
}