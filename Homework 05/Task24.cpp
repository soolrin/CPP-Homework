//// 24 В кинотеатре M рядов по N мест в каждом.
//// В двумерном массиве хранится информация о проданных билетах.
//// Число 1 означает, что билет на это место уже продан,
//// число 0 означает, что место свободно.
//// Поступил запрос на продажу K билетов на соседние места в одном ряду.
//// Определите, можно ли выполнить этот запрос.
//// Число занятых мест и какие места заняты определяется случайным образом.
//// Вывести начальный массив на экран консоли

#include <iostream>
#include <windows.h>
#include <iomanip>
using namespace std;

#define LIMEGREEN_TEXT  "\033[38;2;50;205;50m"   // Лаймово-зелёный
#define LIGHTCORAL_TEXT "\033[38;2;240;128;128m" // Светлый коралл
#define RED_TEXT        "\033[38;2;255;0;0m"     // Красный
#define YELLOW_TEXT     "\033[38;2;255;255;0m"   // Жёлтый
#define RESET           "\033[0m"                // Сброс цвета

int main() {
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    srand(time(0));
    rand();

    const int ROWS = 5;
    const int COLS = 8;

    int places[ROWS][COLS];
    int request;

    do
    {
        cout << LIMEGREEN_TEXT << "Сколько мест вы хотите в одном ряду "
            "(Не меньше 1 и не больше " << RED_TEXT << COLS
            << LIMEGREEN_TEXT << ") : " << YELLOW_TEXT;
        cin >> request;
    } while (request > COLS || request < 1);

    for (int i = 0; i < ROWS; i++)
        for (int j = 0; j < COLS; j++)
            places[i][j] = rand() % 2;

    cout << "\n";
    string title = "Места в зале";
    cout << RED_TEXT << setw((COLS * 4 / 2) + (title.length() / 2 + 2))
        << title << "\n";

    for (int i = 0; i < ROWS; i++)
    {
        for (int j = 0; j < COLS; j++)
        {
            if (places[i][j] == 1)
            {
                cout << LIGHTCORAL_TEXT << setw(4) << places[i][j];
            }
            else
            {
                cout << LIMEGREEN_TEXT << setw(4) << places[i][j];
            }
        }
        cout << "\n";
    }

    cout << "\n";
    bool found = false;

    for (int i = 0; i < ROWS; i++)
    {
        int count = 0;
        for (int j = 0; j < COLS; j++)
        {
            if (places[i][j] == 0 )
            {
                count++;
            }
            if(places[i][j] == 1 || j == COLS - 1)
            {
                if (count >= request) {
                    cout << LIMEGREEN_TEXT << "Можно продать " 
                        << YELLOW_TEXT << request
                        << LIMEGREEN_TEXT << " билета(ов) подряд в одном ряду." << "\n";
                    cout << LIMEGREEN_TEXT << "Ряд " << YELLOW_TEXT << i + 1 
                        << LIMEGREEN_TEXT << ": места ";
                    for (int k = j - count; k < j; k++)
                    {
                        cout << YELLOW_TEXT << k + 1 << " ";
                    }
                    cout << "\n\n";
                    found = true;
                }
                count = 0;
            }
        }
    }

    if (!found) {
        cout << LIGHTCORAL_TEXT << "Невозможно продать " 
            << YELLOW_TEXT << request 
            << LIGHTCORAL_TEXT << " билета(ов) подряд в одном ряду." << "\n" << RESET;
    }

    cout << "\n\n" << string(55, '=') << "\n";

    return 0;
}
