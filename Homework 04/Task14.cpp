//14. Показать на экране все восьмизначные числа, цифры которых
// не повторяются и делятся на 12345 без остатка.

#include <iostream>
#include <windows.h>
using namespace std;

int main() {
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	int number = 0;
	int number_count = 0;

	for (int one = 1; one < 10; one++) {
		for (int two = 0; two < 10; two++) {
			if (two == one) continue;

			for (int three = 0; three < 10; three++) {
				if (three == one || three == two) continue;

				for (int four = 0; four < 10; four++) {
					if (four == one || four == two || four == three) continue;

					for (int five = 0; five < 10; five++) {
						if (five == one || five == two || five == three
							|| five == four) continue;

						for (int six = 0; six < 10; six++) {
							if (six == one || six == two || six == three
								|| six == four || six == five) continue;

							for (int seven = 0; seven < 10; seven++) {
								if (seven == one || seven == two || seven == three
									|| seven == four || seven == five || seven == six) continue;

								for (int eight = 0; eight < 10; eight++) {
									if (eight == one || eight == two || eight == three
										|| eight == four || eight == five || eight == six || eight == seven) continue;

									number = one * 10000000 + two * 1000000 + three * 100000 +
										four * 10000 + five * 1000 + six * 100 + seven * 10 + eight;

									if (number % 12345 == 0) {
										cout << number << " ";
										number_count++;
									}
								}
							}
						}
					}
				}
			}
		}
	}

	cout << "\n\nВсего таких чисел: " << number_count << "\n";

	cout << "\n\n" << string(55, '=') << "\n";

	return 0;
}
