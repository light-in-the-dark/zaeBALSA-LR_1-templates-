#include "Libraries.h"

int menu()
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
				launchSeminar3(1);
				break;
			case 'f':
				launchSeminar3(1.0f);
				break;
			case 'd':
				launchSeminar3(1.0);
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
			Sleep(2000);
			break;
		}
	}
	else
	{
		cerr << "Некорректный номер. Перезапуск...";
		Sleep(2000);
	}
	return -1;
}