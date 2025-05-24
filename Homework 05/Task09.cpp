//9.Создать массив на 100 действительных чисел.
// Определить, сколько элементов массива не имеют дробной части.

#include <iostream>
#include <windows.h>
using namespace std;

int main() {

    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    srand(time(0));
    rand();

    const int SIZE = 100;
    double arr[SIZE]{};
    int count = 0;

    cout << "\nВесь массив:\n";

    for (int i = 0; i < SIZE; i++) {
        arr[i] = (double)(rand() % 100) + (rand() % 10) / 10.0;
        cout << arr[i] << ", ";
    }

    for (int i = 0; i < SIZE; i++)
        if (arr[i] == (int)(arr[i]))
            count++;

    cout << "\n\nКоличество чисел без дробной части: " << count;

	cout << "\n\n" << string(55, '=') << "\n";

	return 0;
}

