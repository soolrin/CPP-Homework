//1. �������� ���������, ������� ���������� ������������ ������ ������ ����������, ����� ��������� ������� � ����� ���� ����������.
//����� Pi ������ � ��������� ��� �������������� ���������.

#include<iostream>
#include <windows.h>
using namespace std;

const float PI = 3.14;

int main() {
	
	SetConsoleCP(1251);
        SetConsoleOutputCP(1251);

	float r, S, length;

	cout << "������� ������ ����������: ";
	cin >> r;

	S = PI * r * r;
	length = 2 * PI * r;

	cout << "������� ����������: " << S << "\n";
	cout << "����� ����������: " << length << "\n";


	return 0;
}