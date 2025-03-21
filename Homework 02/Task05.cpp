//5. Пользователь вводит с клавиатуры время начала и время завершения телефонного разговора(часы, минуты и секунды).
//Подсчитать стоимость разговора, если стоимость минуты составляет 15 копеек, с учетом посекундной тарификации.

#include<iostream>
#include <windows.h>
using namespace std;

int main() {

    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    //На данном этапе не используем if для проверки перехода на следующий день.
    int start_h, start_min, start_sec;
    int end_h, end_min, end_sec;

    int price_min = 15;
    
    cout << "Введите время начала разговора. (Через пробел hh mm ss)\n";
    cin >> start_h >> start_min >> start_sec;

    cout << "\n\nВведите время конца разговора. (Через пробел hh mm ss)\n";
    cin >> end_h >> end_min >> end_sec;

    int price_all;

    price_all = (end_h - start_h) * 60 * price_min;
    price_all += (end_min - start_min) * price_min;
    price_all += (end_sec - start_sec) * ((float)price_min / 60);

    cout << "Стоимость разговора будет " << price_all / 100<< " грн. " << price_all % 100 << "коп.\n";

    return 0;
}
