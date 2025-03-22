//8. Валера купил N курок по M гривен за одну курицу.Каждая курица несет по X яиц в неделю.
// Валера решил открыть свой бизнес и стал продавать яйца, несущие курицы.
// За сколько дней окупятся куры, если продавать яйца по G гривен за десяток.

#include <windows.h>
#include <iostream>

using namespace std;

int main() {
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	int chickens, weeklyEggsPerHen;
	float priceOneChicken, priceTenEggs;

	cout << "Введите количество кур: ";
	cin >> chickens;
	cout << "Введите цену одной курицы: ";
	cin >> priceOneChicken;
	cout << "Введите количество яиц, которое несет одна курица в неделю: ";
	cin >> weeklyEggsPerHen;
	cout << "Введите цену десятка яиц: ";
	cin >> priceTenEggs;

	float paybackDays = (chickens * priceOneChicken) / (((chickens * weeklyEggsPerHen / 10) * priceTenEggs) / 7);

	cout << "Время для окупаемости (в днях): " << paybackDays << "\n";

	return 0;
}

