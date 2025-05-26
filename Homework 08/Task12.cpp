// 12) НОД.
// Напишите рекурсивную функцию для нахождения
// наибольшего общего делителя двух целых чисел.

#include <iostream>
#include <windows.h>

using namespace std;

#define LIMEGREEN_TEXT  "\033[38;2;50;205;50m"   // Лаймово-зелёный
#define YELLOW_TEXT     "\033[38;2;255;255;0m"   // Жёлтый
#define RESET           "\033[0m"                // Сброс цвета

int findGCD(int a, int b) {
    if (b == 0) return a;
    return findGCD(b, a % b);
}

int main() {
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    int a, b;

    cout << LIMEGREEN_TEXT << "Введите число №1: "
        << YELLOW_TEXT;
    cin >> a;

    cout << LIMEGREEN_TEXT << "Введите число №2: "
        << YELLOW_TEXT;
    cin >> b;

    cout << LIMEGREEN_TEXT << "НОД: " << YELLOW_TEXT
        << findGCD(a, b) << RESET;

    cout << "\n\n" << string(55, '=') << "\n";

    return 0;
}