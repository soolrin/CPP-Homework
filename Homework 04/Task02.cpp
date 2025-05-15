//2. Программа выводит таблицу соответствия температур Цельсию и Фаренгейту в указанном диапазоне.

#include <iostream>
#include <windows.h>
#include <iomanip>
using namespace std;

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

    cout << setw(10) << "Цельсий" << " " << setw(10) << "Фаренгейт" << "\n";
    cout << "|====================|" << "\n";

    for (int i = -5; i <= 5; i++) {
        cout << "|";
        cout << setw(5) << i << setw(5) << "|";
        cout << fixed << setprecision(1) << setw(7) << (i * 9.0 / 5.0 + 32) << "   " << "|" << "\n";
        cout << "|====================|" << "\n";
    }

	cout << "\n\n" << string(55, '=') << "\n";

	return 0;
}
