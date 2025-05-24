// 11) Сумма чисел в диапазоне.
// Вычислите сумму чисел в определенном диапазоне.
// Начало и конец диапазона задаются параметрами функции.

#include <iostream>
#include <windows.h>

using namespace std;

#define LIMEGREEN_TEXT  "\033[38;2;50;205;50m"   // Лаймово-зелёный
#define YELLOW_TEXT     "\033[38;2;255;255;0m"   // Жёлтый
#define RESET           "\033[0m"                // Сброс цвета

int sumRange(int start, int end) {
    if (start > end) return sumRange(end, start);
    if (start == end) return start;
    return start + sumRange(start + 1, end);
}

int main() {
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    int start, end;

    cout << LIMEGREEN_TEXT << "Введите начало диапазона: "
        << YELLOW_TEXT;
    cin >> start;

    cout << LIMEGREEN_TEXT << "Введите конец диапазона: "
        << YELLOW_TEXT;
    cin >> end;

    cout << LIMEGREEN_TEXT << "\nСумма чисел: " << YELLOW_TEXT
        << sumRange(start, end) << RESET;

    cout << "\n\n" << string(55, '=') << "\n";

    return 0;
}