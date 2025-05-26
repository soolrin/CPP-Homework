// 2) От A до B.
// Даны два целых числа A и B. Выведите все числа от A до B включительно,
// в порядке возрастания, если A < B, или в порядке уменьшения в противном случае.
// Вход: 5 1
// Выход: 5 4 3 2 1

#include <iostream>
#include <windows.h>

using namespace std;

#define LIMEGREEN_TEXT  "\033[38;2;50;205;50m"   // Лаймово-зелёный
#define RED_TEXT        "\033[38;2;255;0;0m"     // Красный
#define YELLOW_TEXT     "\033[38;2;255;255;0m"   // Жёлтый
#define RESET           "\033[0m"                // Сброс цвета

void printToN(int A, int B)
{
    cout << A << " ";
    if (A == B) return;
    if (A < B)
    {
        printToN(A + 1, B);
    }
    else
    {
        printToN(A - 1, B);
    }
}


int main() {
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    int A, B;

    cout << LIMEGREEN_TEXT << "Введите диапазон"
        << RED_TEXT << " A "
        << LIMEGREEN_TEXT << "и диапазон"
        << RED_TEXT << " B\n";

    cout << LIMEGREEN_TEXT << "A = " << YELLOW_TEXT;
    cin >> A;

    cout << LIMEGREEN_TEXT << "B = " << YELLOW_TEXT;
    cin >> B;

    cout << "\n";

    printToN(A, B);

    cout << "\n\n" << string(55, '=') << "\n";

    return 0;
}
