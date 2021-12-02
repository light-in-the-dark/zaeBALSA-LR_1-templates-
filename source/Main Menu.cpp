#include "Libraries.h"

int menu()
{
	do
	{
		system("cls");
		getInfo(0);

		char flag[100]; // экспериментальный безотказный ввод данных
		cin.getline(flag, 100, '\n');
		cin.clear();

		if (isdigit(flag[0]) && flag[1] == '\0')

		{
			switch (flag[0])
			{
			case '3':
				switch (chooseTypeOfNumbers())
				{
				case 'i':
					cout << "Запуск семинара №3...";
					Sleep(1000);
					launchSeminar3((int)1);
					break;
				case 'f':
					cout << "Запуск семинара №3...";
					Sleep(1000);
					launchSeminar3((float)1);
					break;
				case 'd':
					cout << "Запуск семинара №3...";
					Sleep(1000);
					launchSeminar3((double)1);
					break;
				}
				break;
			case '4':
				switch (chooseTypeOfNumbers())
				{
				case 'i':
					cout << "Запуск семинара №4...";
					Sleep(1000);
					launchSeminar4((int)1);
					break;
				case 'f':
					cout << "Запуск семинара №4...";
					Sleep(1000);
					launchSeminar4((float)1);
					break;
				case 'd':
					cout << "Запуск семинара №4...";
					Sleep(1000);
					launchSeminar4((double)1);
					break;
				}
				break;
			case '5':
				cout << "Запуск семинара №5...";
				Sleep(1000);
				launchSeminar5();
				break;
			case '0':
				return 0;
			default:
				cerr << "Некорректный номер. Перезапуск...";
				Sleep(1000);
				system("pause > nul");
				break;
			}
		}
	} while (true);
}