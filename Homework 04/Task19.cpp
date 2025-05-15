//19. Показать на экране равнобедренный треугольник высотой N.

#include <iostream>
#include <windows.h>
using namespace std;

int main() {

    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    int up;
    cout << "Введите высоту треугольника: ";
    cin >> up;



    // Первый цикл (сложно читаемый)
    for (int i = 1; i <= up; i++) {
        cout << string(up - i, ' ') << string(i * 2 - 1, '*') << "\n";
    }

    // Второй цикл (через переменные)
    for (int i = 1; i <= up; i++) {
        string space = string(up - i, ' ');
        string star = string(i * 2 - 1, '*');
        cout << space + star << "\n";
    }

    // Третий цикл (через вложенные циклы)
    for (int i = 1; i <= up; i++) {
        for (int j = 1; j <= up - i; j++) {
            cout << " ";
        }
        for (int j = 1; j <= 2 * i - 1; j++) {
            cout << "*";
        }
        cout << "\n";
    }
	
    cout << "\n\n" << string(55, '=') << "\n";

	return 0;
}

