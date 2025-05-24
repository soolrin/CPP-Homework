// 7) Реверс числа.
// Дано число n, десятичная запись которого не содержит нулей.
// Получите число, записанное теми же цифрами,
// но в противоположном порядке.При решении этой задачи
// нельзя использовать циклы, строки, списки, массивы,
// разрешается только рекурсия и целочисленная арифметика.
// Функция должна возвращать целое число,
// являющееся результатом работы программы,
// выводить число по одной цифре нельзя.
// Вход: 179
// Выход : 971

#include <iostream>
#include <windows.h>

using namespace std;

#define LIMEGREEN_TEXT  "\033[38;2;50;205;50m"   // Лаймово-зелёный
#define RED_TEXT        "\033[38;2;255;0;0m"     // Красный
#define YELLOW_TEXT     "\033[38;2;255;255;0m"   // Жёлтый
#define RESET           "\033[0m"                // Сброс цвета

int DigRevers(int num, int reversed = 0) 
{
    if (num == 0) return reversed;
    return DigRevers(num / 10, reversed * 10 + num % 10);
}

int main() {
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    int A;

    cout << LIMEGREEN_TEXT << "Введите натуральное число без нулей"
        << RED_TEXT << " A\n";

    cout << LIMEGREEN_TEXT << "A = " << YELLOW_TEXT;
    cin >> A;

    cout << LIMEGREEN_TEXT << "\nРеверс числа: " << YELLOW_TEXT
        << DigRevers(A) << RESET;
    cout << RESET;

    cout << "\n\n" << string(55, '=') << "\n";

    return 0;
}