//6. Рассчитать общую массу всех планет солнечной системы.Вычислить среднее арифметическое масс планет.
//Затем – массу каждой планеты в процентном отношении, если принять за 100 % общую массу всех планет.
//Во сколько раз масса самой большой планеты больше суммы масс всех остальных планет ? Все результаты – показать на экране.

#include<iostream>
#include <windows.h>
#include <iomanip>

using namespace std;

int main() {

    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    double mercury = 3.301e23;
    double venus = 4.867e24;
    double earth = 5.972e24;
    double mars = 6.417e23;
    double jupiter = 1.899e27;
    double saturn = 5.685e26;
    double uranus = 8.682e25;
    double neptune = 1.024e26;

    double total_mass = mercury + venus + earth + mars + jupiter + saturn + uranus + neptune;
    double average_mass = total_mass / 8;

    cout << "Общая масса всех планет: " << total_mass << " кг\n";
    cout << "Средняя масса планет: " << average_mass << " кг\n";

    cout << fixed << setprecision(3);

    cout << "\nМасса Меркурия в процентном соотношении: " << mercury / total_mass * 100 << " %\n";
    cout << "Масса Венеры в процентном соотношении: " << venus / total_mass * 100 << " %\n";
    cout << "Масса Земли в процентном соотношении: " << earth / total_mass * 100 << " %\n";
    cout << "Масса Марса в процентном соотношении: " << mars / total_mass * 100 << " %\n";
    cout << "Масса Юпитера в процентном соотношении: " << jupiter / total_mass * 100 << " %\n";
    cout << "Масса Сатурна в процентном соотношении: " << saturn / total_mass * 100 << " %\n";
    cout << "Масса Урана в процентном соотношении: " << uranus / total_mass * 100 << " %\n";
    cout << "Масса Нептуна в процентном соотношении: " << neptune / total_mass * 100 << " %\n";

    total_mass -= jupiter;

    cout << fixed << setprecision(2);
    cout << "\nМасса самой большой планеты больше суммы масс всех остальных планет в " << jupiter / total_mass << " раза\n\n";

    return 0;
}
