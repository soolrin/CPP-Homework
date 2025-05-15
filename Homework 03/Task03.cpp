//3. Реализовать программу "Мольфар 4000".Пользователь вводит вопросы.
//Программа дает случайный ответ по набору заранее предусмотренных ответов
//(5 положительных, 5 отрицательных, 10 нейтральных вариантов).

#include <iostream>
#include <windows.h>
using namespace std;

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	srand(time(0));
	rand();

	cout << "Что вы хотите спросить у \"Мольфар 4000\"\n";
	cout << "Ваш вопрос: ";

	string question;
	cin >> question;

	cout << "\nОтвет Мольфара: ";
	switch (rand() % 20 + 1)
	{
	case 1:
		cout << "Да, без сомнений!"; 
		break;
	case 2:
		cout << "Нет, даже не думай."; 
		break;
	case 3:
		cout << "Скорее всего, да.";  
		break;
	case 4:
		cout << "Точно нет!";  
		break;
	case 5:
		cout << "Да, но будь осторожен."; 
		break;
	case 6:
		cout << "Ответ кроется в тебе самом."; 
		break;
	case 7:
		cout << "Всё возможно, но не сейчас."; 
		break;
	case 8:
		cout << "Спроси позже."; 
		break;
	case 9:
		cout << "Судьба благоволит этому."; 
		break;
	case 10:
		cout << "Звезды не в твою пользу сегодня."; 
		break;
	case 11:
		cout << "Лучше подумай еще раз."; 
		break;
	case 12:
		cout << "Не торопись с выводами, всё может измениться."; 
		break;
	case 13:
		cout << "Будь готов к неожиданным поворотам."; 
		break;
	case 14:
		cout << "Возможно, но только если ты постараешься."; 
		break;
	case 15:
		cout << "Судьба не определена, и только ты можешь ее изменить."; 
		break;
	case 16:
		cout << "Нет, это не суждено."; 
		break;
	case 17:
		cout << "Это отличная идея, действуй!";  
		break;
	case 18:
		cout << "У тебя всё получится, не сомневайся!";  
		break;
	case 19:
		cout << "Нет, этого не избежать."; 
		break;
	case 20:
		cout << "Это не твоя дорога, ищи другую."; 
		break;
	}

	cout << "\n\n" << string(55, '=') << "\n";

	return 0;
}
