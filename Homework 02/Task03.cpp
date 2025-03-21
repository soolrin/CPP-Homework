//3. Пользователь вводит с клавиатуры сумму в гривнах(дробное число).Вывести отдельно количество гривен и количество копеек.
//(например, ввести 45.67 гривен – получить и вывести 45 гривен 67 копеек).

#include<iostream>
#include <windows.h>
using namespace std;

int main() {

    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

	double sum;

	cout << "Введите сумму в гривнах: ";
	cin >> sum;

	int UAH = sum;
	int kopecks = (int)((sum - UAH) * 100);

	cout << UAH << " гривен " << kopecks << " копеек" << "\n";


    return 0;
}
