//4. ������������ ������ � ���������� ����� � ��������.��������� ��� �������� � ���, ����, ������ � �������.
//��������, 43512 ������ � ��� 12 �����, 5 ����� � 12 ������.

#include<iostream>
#include <windows.h>
using namespace std;

int main() {

    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    int all_time_sec;
    int days, hours, minutes, second;

    cout << "������� ����� � ��������: ";
    cin >> all_time_sec;

    second = all_time_sec % 60;
    minutes = all_time_sec / 60 % 60;
    hours = all_time_sec / 3600 % 24;
    days = all_time_sec / 86400;

    cout << "\n" << "�: " << all_time_sec << " ��������\n";
    cout << "���: " << days << "\n";
    cout << "����: " << hours << "\n";
    cout << "������: " << minutes << "\n";
    cout << "�������: " << second << "\n";

    return 0;
}
