//2. Поменять местами значения переменных a и b, сначала с использованием дополнительной третьей переменной, а затем без.
#include<iostream>
#include <windows.h>
using namespace std;


int main() {
	SetConsoleCP(1251);
        SetConsoleOutputCP(1251);

	int a = 3, b = 2, temp;

	cout << "Изначальное значение переменных\n";
	cout << "а = " << a << ", b = " << b;

	temp = a;
	a = b;
	b = temp;

	cout << "\nПосле изменения(1)\n";
	cout << "а = " << a << ", b = " << b;
	
	a += b; 
	b = a - b;
	a -= b;

	cout << "\nПосле изменения(2)\n";
	cout << "а = " << a << ", b = " << b << "\n\n";

	return 0;
}