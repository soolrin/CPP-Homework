//9) Числа Фибоначчи.
//Напишите функцию для вычисления элементов ряда чисел Фибоначчи,
// опираясь на рекуррентное уравнение F(n) = F(n - 1) + F(n - 2).
//Функция принимает индекс числа, возвращает значение числа.

#include <iostream>
#include <windows.h>

using namespace std;

#define LIMEGREEN_TEXT  "\033[38;2;50;205;50m"   // Лаймово-зелёный
#define RED_TEXT        "\033[38;2;255;0;0m"     // Красный
#define YELLOW_TEXT     "\033[38;2;255;255;0m"   // Жёлтый
#define RESET           "\033[0m"                // Сброс цвета

int fibonacci(int num) {
    if (num <= 0) return 0;
    if (num == 1) return 1;
    return fibonacci(num - 1) + fibonacci(num - 2);
}

int main() {
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    int num;
    cout << LIMEGREEN_TEXT << "Введите индекс числа Фибоначчи: "
        << YELLOW_TEXT;
    cin >> num;

    cout << LIMEGREEN_TEXT << "F(" << num << ") = " << YELLOW_TEXT
        << fibonacci(num) << RESET;

    cout << "\n\n" << string(55, '=') << "\n";

    return 0;
}