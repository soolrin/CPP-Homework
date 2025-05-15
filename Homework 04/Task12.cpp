//12. Написать программу, показывающую таблицу умножения(таблица Пифагора).

#include <iostream>
#include <windows.h>
#include <iomanip>
using namespace std;

int main() {
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    for (int i = 1; i <= 10; i++)
    {
        for (int j = 1; j <= 10; j++)
        {
            cout << setw(4) << i * j;
        }
        cout << "\n";
    }

    cout << "\n\n" << string(55, '=') << "\n";

    return 0;
}
