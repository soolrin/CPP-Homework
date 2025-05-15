//11. Ежемесячная стипендия студента составляет N гривен, а расходы на проживание
// превышают стипендию и составляют M гривен в месяц.Рост цен ежемесячно увеличивает
// расходы на 5 % .Составить программу расчета суммы денег, которую необходимо раз попросить
// у родителей, чтобы можно было прожить учебный год(10 месяцев), используя только эти деньги и стипендию.

#include <iostream>
#include <windows.h>
#include <iomanip>
using namespace std;

int main() {
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    double stipend = 4000;
    double expenses = 4800;
    int months = 10;
    double askMoney = 0;


    for (int i = 0; i < months; i++) {
        askMoney += expenses;
        expenses *= 1.05; 
    }

    askMoney -= stipend * months;

    cout << fixed << setprecision(2);
    cout << "Необходимо запросить у родителей " << askMoney << " гривен." << "\n";

    cout << "\n\n" << string(55, '=') << "\n";

    return 0;
}
