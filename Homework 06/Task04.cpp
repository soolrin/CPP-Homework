// 4) Сумма цифр числа.
// Дано натуральное число N.Вычислите сумму его цифр.
// При решении этой задачи нельзя использовать строчки, списки, массивы, глобальные переменные(ну и циклы, конечно).
// Вход: 179
// Выход : 17

#include <iostream>
#include <windows.h>

using namespace std;

#define LIMEGREEN_TEXT  "\033[38;2;50;205;50m"   // Лаймово-зелёный
#define RED_TEXT        "\033[38;2;255;0;0m"     // Красный
#define YELLOW_TEXT     "\033[38;2;255;255;0m"   // Жёлтый
#define RESET           "\033[0m"                // Сброс цвета

int sumDigits(int num) {

    if (num == 0) return 0;
    else return num % 10 + sumDigits(num / 10);
}

int main() {
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    int A;

    cout << LIMEGREEN_TEXT << "Введите число"
        << RED_TEXT << " A " << "\n";

    cout << LIMEGREEN_TEXT << "A = " << YELLOW_TEXT;
    cin >> A;

    cout << LIMEGREEN_TEXT << "Сумма цифр числа " 
        << YELLOW_TEXT << A 
        << LIMEGREEN_TEXT " = "
        << YELLOW_TEXT << sumDigits(A) << RESET;

    cout << "\n\n" << string(55, '=') << "\n";

    return 0;
}