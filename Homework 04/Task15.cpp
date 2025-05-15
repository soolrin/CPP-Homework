//15. Написать приложение, которое выводит на экран все простые числа в диапазоне от 2 до 10.000.000.

#include <iostream>
#include <windows.h>
using namespace std;

int main() {
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    int limit = 10000000;

    for (int i = 2; i < limit; i++) {
        bool isPrime = true;

        for (int j = 2; j * j <= i; j++) {
            if (i % j == 0) {
                isPrime = false;
                break;
            }
        }

        if (isPrime) {
            cout << i << ", ";
        }
    }

    cout << "\n\n" << string(55, '=') << "\n";

    return 0;
}
