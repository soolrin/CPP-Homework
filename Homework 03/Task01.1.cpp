//1. Реализовать калькулятор.Вводятся 2 любых действительных числа в переменные а и в.
//Необходимо вывести на экран меню с пунктами : a + b;  a - b;  a * b;  a / b;  a % b;
//При выборе соответствующего пункта меню происходит вывод результата вычисления(должна быть проверка деления на 0!)

#include <iostream>
#include <windows.h>
using namespace std;

int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    
    long double a, b;
    char select;

    cout << "Введите первое число: ";
    cin >> a;
    cout << "Введите второе число: ";
    cin >> b; 

    cout << "\nКакое действие вы хотите сделать? (Выберите вариант)\n";
    cout << " 1) + \n 2) - \n 3) * \n 4) / \n 5) % \n";

    cout << "\nКакое действие? = ";
    cin >> select;

    if (select == '1' || select == '+') {
        cout << "\n" << a << " + " << b << " = " << a + b;
    }
    else if (select == '2' || select == '-'){
        cout << "\n" << a << " - " << b << " = " << a - b;
    }
    else if (select == '3' || select == '*') {
        cout << "\n" << a << " * " << b << " = " << a * b;
    }
    else if (select == '4' || select == '/') {
        if (b == 0) {
            cout << "Деление на ноль невозможно!\n";
            return 0;
        }
        cout << "\n" << a << " / " << b << " = " << a / b;
    }
    else if (select == '5' || select == '%') {
        if ((a == (int)a) && (b == (int)b)) {
            if (b == 0) {
                cout << "Деление на ноль невозможно!\n";
                return 0;
            }
            cout << "\n" << a << " % " << b << " = " << (int)a % (int)b;
        }
        else {
            cout << "\nОператор % работает только с целыми числами\n";
        }
    }

    cout << "\n\n" << string(55, '=') << "\n";

    return 0;
}
