//11.Создать массив из 10 целых случайных чисел.
// Изменить порядок следования элементов массива на противоположный
// (1-й элемент меняется с 10-м, 2-й – с 9-м и т. д.).

#include <iostream>
#include <windows.h>
using namespace std;

int main() {

	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

    srand(time(0));
    rand();

    const int SIZE = 11;
    int arr[SIZE]{};


    cout << "Оригинальный массив:\n";

    for (int i = 0; i < SIZE; i++) {
        arr[i] = rand() % 51;
        cout << arr[i] << ", ";
    }

    cout << "\n\nИзмененный массив:\n";

    for (int i = 0; i < SIZE; i++) {
        if (i < SIZE / 2) {
            int j = SIZE - 1 - i;
            int temp = arr[i];
            arr[i] = arr[j];
            arr[j] = temp;
        }
        cout << arr[i] << ", ";
    }

	cout << "\n\n" << string(55, '=') << "\n";

	return 0;
}





