//1. Написать программу, которая предлагает пользователю ввести радиус окружности, затем вычисляет площадь и длину этой окружности.
//Число Pi задать в программе как действительную константу.

#include<iostream>
#include <windows.h>
using namespace std;

const float PI = 3.14;

int main() {
	
	SetConsoleCP(1251);
        SetConsoleOutputCP(1251);

	float r, S, length;

	cout << "Введите радиус окружности: ";
	cin >> r;

	S = PI * r * r;
	length = 2 * PI * r;

	cout << "Площадь окружности: " << S << "\n";
	cout << "Длина окружности: " << length << "\n";


	return 0;
}