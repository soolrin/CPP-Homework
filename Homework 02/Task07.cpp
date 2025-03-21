//7. Ввести с клавиатуры два 3 - значных числа и поменять в них средние цифры(например, ввести 357 и 702 – получить и вывести числа 307 и 752).

//#include <windows.h>
//#include <iostream>
//#include <string>
//using namespace std;
//
//
//int main() {
//	SetConsoleCP(1251);
//	SetConsoleOutputCP(1251);
//
//	int num1, num2;
//
//	cout << "Введите первое число: ";
//	cin >> num1;
//
//	cout << "Введите второе число: ";
//	cin >> num2;
//
//	int temp = num1 % 100 - num1 % 10;
//
//	num1 -= temp;
//	num1 += num2 % 100 - num2 % 10;
//	num2 -= num2 % 100 - num2 % 10;
//	num2 += temp;
//
//	cout << "\nПервое число стало: " << num1 << "\n";
//	cout << "Второе число стало: " << num2 << "\n";
//
//	return 0;
//}

#include <windows.h>
#include <iostream>
#include <string>
using namespace std;

int main() {
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    int num1, num2;

    cout << "Введите первое число: ";
    cin >> num1;

    cout << "Введите второе число: ";
    cin >> num2;

    // Извлекаем среднюю цифру первого числа (десятки)
    int middleDigit1 = (num1 / 10) % 10;
    // Извлекаем среднюю цифру второго числа (десятки)
    int middleDigit2 = (num2 / 10) % 10;

    cout << middleDigit1;

    // Меняем средние цифры
    num1 = (num1 / 100) * 100 + middleDigit2 * 10 + (num1 % 10);  // заменили десятки
    num2 = (num2 / 100) * 100 + middleDigit1 * 10 + (num2 % 10);  // заменили десятки

    cout << "\nПервое число стало: " << num1 << "\n";
    cout << "Второе число стало: " << num2 << "\n";

    return 0;
}
