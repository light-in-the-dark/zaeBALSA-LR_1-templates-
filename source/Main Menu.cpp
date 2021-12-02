#include "Libraries.h"

int menu()
{
	do
	{
		system("cls");
		getInfo(0);

		char flag = ' ';
		cin >> flag;
		cin.clear();
		cin.ignore();

		if (isdigit(flag))
		{
			switch (flag)
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
				cout << "Запуск семинара №4...";
				Sleep(1000);
				launchSeminar4();
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
				break;
			}
		}
	} while (true);
}