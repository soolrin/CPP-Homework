//5. Написать приложение, которое предлагает пользователю ввести число,
// а затем подсчитывает, сколько раз это число встречается в массиве из 100 случайных элементов.

#include <iostream>
#include <windows.h>
using namespace std;

int main() {

	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	srand(time(0));
	rand();

	const int size = 100;
	int arr[size]{};
	int num;
	int numCounter = 0;
	do
	{
		cout << "\nВведите число от 0 до 100\n" << "Ваше число: ";
		cin >> num;
	} while (num < 0 || num > 100);

	for (int i = 0; i < size; i++)
		arr[i] = rand() % 101;

	cout << "\nВесь массив:\n";

	for (int i = 0; i < size; i++) {
		cout << arr[i] << ' ';

		if (arr[i] == num)
			numCounter++;

	}

	cout << "\n\nВаше число встретилось: " << numCounter << " раз(а)";

	cout << "\n\n" << string(55, '=') << "\n";

	return 0;
}

