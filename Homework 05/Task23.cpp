// 23 Реализовать превращение двумерного массива в одномерное и наоборот.

#include <iostream>
#include <windows.h>
#include <iomanip>

using namespace std;

#define LIGHTCORAL_TEXT "\033[38;2;240;128;128m" // Светлый коралл
#define RED_TEXT        "\033[38;2;255;0;0m"     // Красный
#define RESET           "\033[0m"                // Сброс цвета


int main() {
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    
    srand(time(0));
    rand();
    
    const int ROWS = 3;
    const int COLS = 5;
    const int SIZE = ROWS * COLS;

    int arrD2[ROWS][COLS]{};
    int arrD1[SIZE]; 

    // Заполнение двумерного массива
    for (int i = 0; i < ROWS; i++)
    {
        for (int j = 0; j < COLS; j++)
        {
            arrD2[i][j] = rand() % 91 + 10;
        }
    }

    // Преобразование двумерного в одномерного
    int k = 0;
    for (int i = 0; i < ROWS; i++) {
        for (int j = 0; j < COLS; j++) {
            arrD1[k] = arrD2[i][j];
            k++;
        }
    }
 
    string title = "Одномерный массив:";
    cout << RED_TEXT << setw((SIZE * 4 / 2) + (title.length() / 2 + 2))
        << title << "\n" << LIGHTCORAL_TEXT;

    // Вывод одномерного массива
    for (int i = 0; i < SIZE; i++) {
        cout << setw(4) << arrD1[i];
    }
    cout << "\n";

    // Преобразование одномерного в двумерный
    int arrNew[ROWS][COLS];
    k = 0;
    for (int i = 0; i < ROWS; i++) {
        for (int j = 0; j < COLS; j++) {
            arrNew[i][j] = arrD1[k];
            k++;
        }
    }


    title = "Новый двумерный массив";
    cout << RED_TEXT << setw((SIZE * 4 / 2) + (title.length() / 2 + 2))
        << title << "\n" << LIGHTCORAL_TEXT;

    // Вывод двумерного массива
    for (int i = 0; i < ROWS; i++) {
        cout << setw(21) << "";
        for (int j = 0; j < COLS; j++) {
            cout << setw(4) << arrNew[i][j];
        }
        cout << "\n";
    }
    cout << RESET;

    cout << "\n\n" << string(55, '=') << "\n";

    return 0;
}