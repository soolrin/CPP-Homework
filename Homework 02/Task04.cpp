//4. Пользователь вводит с клавиатуры время в секундах.Перевести это значение в дни, часы, минуты и секунды.
//Например, 43512 секунд – это 12 часов, 5 минут и 12 секунд.

#include<iostream>
#include <windows.h>
using namespace std;

int main() {

    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    int all_time_sec;
    int days, hours, minutes, second;

    cout << "Введите время в секундах: ";
    cin >> all_time_sec;

    second = all_time_sec % 60;
    minutes = all_time_sec / 60 % 60;
    hours = all_time_sec / 3600 % 24;
    days = all_time_sec / 86400;

    cout << "\n" << "В: " << all_time_sec << " секундах\n";
    cout << "Дни: " << days << "\n";
    cout << "Часы: " << hours << "\n";
    cout << "Минуты: " << minutes << "\n";
    cout << "Секунды: " << second << "\n";

    return 0;
}
