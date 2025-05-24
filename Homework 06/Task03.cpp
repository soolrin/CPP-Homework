// 3) Точная степень двойки.
// Дано натуральное число N.Выведите слово YES,
// если число N является точной степенью двойки 
// или слово NO в противном случае.
// Операцией подъема к степени пользоваться нельзя!
// Вход: 3 8
// Выход : NO YES

#include <iostream>
#include <windows.h>

using namespace std;

#define LIMEGREEN_TEXT  "\033[38;2;50;205;50m"   // Лаймово-зелёный
#define RED_TEXT        "\033[38;2;255;0;0m"     // Красный
#define YELLOW_TEXT     "\033[38;2;255;255;0m"   // Жёлтый
#define RESET           "\033[0m"                // Сброс цвета

bool isPowerTwo(int n) 
{
    if (n == 1) {
        return true;
    }
    else if (n % 2 != 0 || n == 0) {
        return false;
    }
    else {
        return isPowerTwo(n / 2);
    }
}

int main() {
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    int A, B;

    cout << LIMEGREEN_TEXT << "Введите два числа"
        << RED_TEXT << " A " << LIMEGREEN_TEXT << "и " << RED_TEXT << "B\n";

    cout << LIMEGREEN_TEXT << "A = " << YELLOW_TEXT;
    cin >> A;

    cout << LIMEGREEN_TEXT << "B = " << YELLOW_TEXT;
    cin >> B;

    cout << RESET << "\n";

    // Проверка для A
    if (isPowerTwo(A)) 
    {
        cout << LIMEGREEN_TEXT << "YES" << RESET << " ";
    }
    else {
        cout << RED_TEXT << "NO" << RESET << " ";
    }

    // Проверка для B
    if (isPowerTwo(B)) {
        cout << LIMEGREEN_TEXT << "YES" << RESET;
    }
    else {
        cout << RED_TEXT << "NO" << RESET;
    }

    cout << "\n\n" << string(55, '=') << "\n";

    return 0;
}