//2. �������� ������� �������� ���������� a � b, ������� � �������������� �������������� ������� ����������, � ����� ���.
#include<iostream>
#include <windows.h>
using namespace std;


int main() {
	SetConsoleCP(1251);
        SetConsoleOutputCP(1251);

	int a = 3, b = 2, temp;

	cout << "����������� �������� ����������\n";
	cout << "� = " << a << ", b = " << b;

	temp = a;
	a = b;
	b = temp;

	cout << "\n����� ���������(1)\n";
	cout << "� = " << a << ", b = " << b;
	
	a += b; 
	b = a - b;
	a -= b;

	cout << "\n����� ���������(2)\n";
	cout << "� = " << a << ", b = " << b << "\n\n";

	return 0;
}