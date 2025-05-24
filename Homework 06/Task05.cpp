// 5) Цифры числа справа налево.
// Дано натуральное число N.Выведите все его цифры
// по одной в обратном порядке, разделяя их пробелами.
// При решении этой задачи нельзя использовать строки, списки,
// массивы(ну и циклы, конечно).Разрешается только рекурсия
// и целочисленная арифметика.
// Вход: 179
// Выход : 9 7 1

#include <iostream>
#include <windows.h>

using namespace std;

#define LIMEGREEN_TEXT  "\033[38;2;50;205;50m"   // Лаймово-зелёный
#define RED_TEXT        "\033[38;2;255;0;0m"     // Красный
#define YELLOW_TEXT     "\033[38;2;255;255;0m"   // Жёлтый
#define RESET           "\033[0m"                // Сброс цвета

void printDigRevers(int num) {

    if (num == 0) return;
    cout << num % 10 << " ";
    printDigRevers(num / 10);
}

int main() {
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    int A;

    cout << LIMEGREEN_TEXT << "Введите число"
        << RED_TEXT << " A " << "\n";

    cout << LIMEGREEN_TEXT << "A = " << YELLOW_TEXT;
    cin >> A;

    printDigRevers(A);
    cout << RESET;

    cout << "\n\n" << string(55, '=') << "\n";

    return 0;
}