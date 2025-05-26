//8) Палиндром.
//Дано слово, состоящее только из строчных латинских букв.
// Проверьте, есть ли это слово палиндромом.Выведите YES или NO.
//При решении этой задачи нельзя использовать циклы.
//Вход: radar yes
//Выход : YES NO

#include <iostream>
#include <windows.h>

using namespace std;

#define LIMEGREEN_TEXT  "\033[38;2;50;205;50m"   // Лаймово-зелёный
#define RED_TEXT        "\033[38;2;255;0;0m"     // Красный
#define YELLOW_TEXT     "\033[38;2;255;255;0m"   // Жёлтый
#define RESET           "\033[0m"                // Сброс цвета

bool palindrome(string str, int end, int start = 0) {
    if (start >= end) return true;
    if (str[start] != str[end]) return false;
    return palindrome(str, end - 1, start + 1);
}

int main() {
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    string word1, word2;

    cout << LIMEGREEN_TEXT << "Введите два слова: "
        << YELLOW_TEXT;
    cin >> word1 >> word2;

    cout << LIMEGREEN_TEXT << "\nРезультат: ";

    // Проверка первого слова
    if (palindrome(word1, word1.length() - 1))
        cout << LIMEGREEN_TEXT << "YES ";
    else
        cout << RED_TEXT << "NO ";

    // Проверка второго слова
    if (palindrome(word2, word2.length() - 1))
        cout << LIMEGREEN_TEXT << "YES" << RESET;
    else
        cout << RED_TEXT << "NO" << RESET;

    cout << "\n\n" << string(55, '=') << "\n";

    return 0;
}