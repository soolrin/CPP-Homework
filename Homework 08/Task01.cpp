//1) От 1 до n.
//Дано натуральное число n.Выведите все числа от 1 до n.
//Вход: 5
//Выход : 1 2 3 4 5

#include <iostream>
#include <windows.h>
using namespace std;

#define LIMEGREEN_TEXT  "\033[38;2;50;205;50m"   // Лаймово-зелёный
#define YELLOW_TEXT     "\033[38;2;255;255;0m"   // Жёлтый
#define RESET           "\033[0m"                // Сброс цвета

void printToN(int end)
{
    if (end == 0) return;
    printToN(end - 1);
    cout << end << " ";
}


int main() {
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    int num;
    cout << LIMEGREEN_TEXT << "Введите число, до которого нужно выводить: " << YELLOW_TEXT;
    cin >> num;
    cout << "\n";
    printToN(num);

    cout << "\n\n" << string(55, '=') << "\n";

    return 0;
}
