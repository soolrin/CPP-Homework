//10. Написать игру «Угадай число».Пользователь мысленно загадывает число от 0 до 1000,
// компьютер угадывает его за минимальное количество попыток.

#include <iostream>
#include <windows.h>
using namespace std;

int main() {
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    int left = 0;
    int right = 1000;
    int count = 0;
    char answer;

    while (left <= right) {
        count++;
        int midRange = (left + right) / 2;

        cout << "Наверно ваше число: " << midRange << "\n";
        cout << "1) Ваше число больше? (1 или >)\n";
        cout << "2) Ваше число меньше? (2 или <)\n";
        cout << "3) Это ваше число? (3 или =)\n";;

        cout << "Ваш ответ: ";
        cin >> answer;

        if (answer == '1' || answer == '>') {
            left = midRange + 1;
        }
        else if (answer == '2' || answer == '<') {
            right = midRange - 1;
        }
        else if (answer == '3' || answer == '=') {
            cout << "Я угадал за " << count << " попытку(ок)\n";
            break;
        }
        cout << "\n";
    }

    cout << "\n\n" << string(55, '=') << "\n";

    return 0;
}
