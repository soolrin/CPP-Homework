//3. ������������ ������ � ���������� ����� � �������(������� �����).������� �������� ���������� ������ � ���������� ������.
//(��������, ������ 45.67 ������ � �������� � ������� 45 ������ 67 ������).

#include<iostream>
#include <windows.h>
using namespace std;

int main() {

    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

	double sum;

	cout << "������� ����� � �������: ";
	cin >> sum;

	int UAH = sum;
	int kopecks = (int)((sum - UAH) * 100);

	cout << UAH << " ������ " << kopecks << " ������" << "\n";


    return 0;
}
