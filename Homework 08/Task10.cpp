// 10) Степень числа.
// Вычислите степень числа, используя рекурсию.
// В функцию передается 2 параметра – число и степень.

#include <iostream>
#include <windows.h>

using namespace std;

#define LIMEGREEN_TEXT  "\033[38;2;50;205;50m"   // Лаймово-зелёный
#define YELLOW_TEXT     "\033[38;2;255;255;0m"   // Жёлтый
#define RESET           "\033[0m"                // Сброс цвета

double power(double num, int exp) {
    if (exp == 0) return 1;
    if (exp < 0) return 1 / power(num, -exp);
    return num * power(num, exp - 1); 
}

int main() {
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    double number;
    int exponent;

    cout << LIMEGREEN_TEXT << "Введите число: "
        << YELLOW_TEXT;
    cin >> number;

    cout << LIMEGREEN_TEXT << "Введите степень: "
        << YELLOW_TEXT;
    cin >> exponent;

    cout << LIMEGREEN_TEXT << "\nРезультат: " << YELLOW_TEXT
        << power(number, exponent) << RESET;

    cout << "\n\n" << string(55, '=') << "\n";

    return 0;
}