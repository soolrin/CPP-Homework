// 21. Заполнить квадратную матрицу размером M x N по спирали.
// Число 1 ставится в центр матрицы, затем массив заполняется
// по спирали против часовой стрелки значениями по возрастанию.

#include <iostream>
#include <windows.h>
#include <iomanip>

using namespace std;

#define LIGHTCORAL_TEXT "\033[38;2;240;128;128m" // Светлый коралл
#define RED_TEXT        "\033[38;2;255;0;0m"     // Красный
#define RESET           "\033[0m"                // Сброс цвета


int main() {
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	const int SIZE = 5;

	int arr[SIZE][SIZE]{};

	// Находим центр матрицы
	int cx = SIZE / 2;
	int cy = SIZE / 2;
	arr[cx][cy] = 1;
	
	// Направления: вверх, влево, вниз, вправо
	int dirs[4][2] = { {-1, 0}, {0, -1}, {1, 0}, {0, 1} };
	int dir = 0;
	int step = 1;
	int x = cx, y = cy;
	int num = 2;

	while (num <= SIZE * SIZE) {
		for (int i = 0; i < 2; i++) { // Два направления на каждый шаг
			for (int s = 0; s < step; s++) {
				
				if (num > SIZE * SIZE) 
					break;

				int nx = x + dirs[dir][0];
				int ny = y + dirs[dir][1];

				// Проверка выхода за границы и заполненности
				if (nx >= 0 && nx < SIZE && ny >= 0 && ny < SIZE && arr[nx][ny] == 0) {
					x = nx;
					y = ny;
					arr[x][y] = num;
					num++;
				}
				else {
					break;
				}
			}
			dir = (dir + 1) % 4; // Поворот против часовой стрелки
			if (num > SIZE * SIZE) 
				break;
		}
		step++; // Увеличиваем длину шага
	}

	// Ставит слово сверху, по центру массива
	cout << RED_TEXT << setw(4 * SIZE / 2 + 4)
		<< "Массив" << "\n" << LIGHTCORAL_TEXT;

	for (int i = 0; i < SIZE; i++)
	{
		for (int j = 0; j < SIZE; j++)
		{
			cout << setw(4) << arr[i][j];
		}
		cout << "\n";
	}
	cout << RESET;

	cout << "\n\n" << string(55, '=') << "\n";

	return 0;
}
