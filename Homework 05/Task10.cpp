//10.Создать массив из 200 случайных чисел в диапазоне от 0 до 200.
// Определить количество одноразрядных, двузначных и трехзначных чисел в процентном отношении.

#include <iostream>
#include <windows.h>
using namespace std;

int main() {

	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

    srand(time(0));
    rand();

    const int SIZE = 200;
    int arr[SIZE]{};

    int oneDigit = 0;
    int twoDigit = 0;
    int threeDigit = 0;


    cout << "\nВесь массив:\n";

    for (int i = 0; i < SIZE; i++) {
        arr[i] = rand() % 201;
        cout << arr[i] << ", ";
    }

    for (int i = 0; i < SIZE; i++) {
        if (arr[i] >= 0 && arr[i] <= 9)
            oneDigit++;
        else if (arr[i] >= 10 && arr[i] <= 99)
            twoDigit++;
        else
            threeDigit++;
    }
            
    
    cout << "\n\nКоличество одноразрядных чисел: " << oneDigit << "\n";
    cout << "Количество двузначных чисел: " << twoDigit << "\n";
    cout << "Количество трехзначных чисел: " << threeDigit << "\n\n";

    cout << "Процент одноразрядных чисел: " << (((float)oneDigit / SIZE) * 100) << "%\n";
    cout << "Процент двузначных чисел: " << (((float)twoDigit / SIZE) * 100) << "%\n";
    cout << "Процент трехзначных чисел: " << (((float)threeDigit / SIZE) * 100) << "%\n";

	cout << "\n\n" << string(55, '=') << "\n";

	return 0;
}





