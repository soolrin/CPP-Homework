//5. ������������ ������ � ���������� ����� ������ � ����� ���������� ����������� ���������(����, ������ � �������).
//���������� ��������� ���������, ���� ��������� ������ ���������� 15 ������, � ������ ����������� �����������.

#include<iostream>
#include <windows.h>
using namespace std;

int main() {

    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    //�� ������ ����� �� ���������� if ��� �������� �������� �� ��������� ����.
    int start_h, start_min, start_sec;
    int end_h, end_min, end_sec;

    int price_min = 15;
    
    cout << "������� ����� ������ ���������. (����� ������ hh mm ss)\n";
    cin >> start_h >> start_min >> start_sec;

    cout << "\n\n������� ����� ����� ���������. (����� ������ hh mm ss)\n";
    cin >> end_h >> end_min >> end_sec;

    int price_all;

    price_all = (end_h - start_h) * 60 * price_min;
    price_all += (end_min - start_min) * price_min;
    price_all += (end_sec - start_sec) * ((float)price_min / 60);

    cout << "��������� ��������� ����� " << price_all / 100<< " ���. " << price_all % 100 << "���.\n";

    return 0;
}
