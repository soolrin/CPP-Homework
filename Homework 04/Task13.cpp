//13. Показать номера и общее количество счастливых трамвайных билетов
// с шестизначными номерами.

#include <iostream>
#include <windows.h>
#include <iomanip>
using namespace std;

int main() {
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    int num_count = 0;
    int happyTicketCount = 0;


    for (int ticketNumber = 0; ticketNumber < 1000000; ticketNumber++) {
        int numLeft = ticketNumber / 1000;
        int numRight = ticketNumber % 1000;

        int leftSum = (numLeft / 100) + ((numLeft / 10) % 10) + (numLeft % 10);
        int rightSum = (numRight / 100) + ((numRight / 10) % 10) + (numRight % 10);

        if (leftSum == rightSum) {
            cout << setw(6) << setfill('0') << ticketNumber << ", ";
            happyTicketCount++;
        }
    }

    cout << "\n\n==========================\n";
    cout << "Всего счастливых билетов: " << happyTicketCount << "\n";
    cout << "==========================\n\n";

    cout << "\n\n" << string(55, '=') << "\n";

    return 0;
}
