#include "Libraries.h"

int inputArraySize()
{
	do
	{
		int size = 0;
		int flag = 0;
		cout << "Введите количество элементов массива: ";
		cin >> size;
		cin.clear();  // используется для превращения
		cin.ignore(); // нечисловых символов в 0

		if (size <= 0)
			flag = 1;

		else if (size == 1)
			flag = 2;

		else if (size == 2 || size == 3)
			flag = 3;

		else
			flag = 0;

		switch (flag)
		{
		case 1:
			cerr << "Неверное число элементов. Повторите ввод.\nНажмите любую клавишу для продолжения..." << endl;
			system("pause > nul");
			break;
		case 2:
			cerr << "Только один элемент. Вычислить сумму невозможно. Повторите ввод.\nНажмите любую клавишу для продолжения..." << endl;
			system("pause > nul");
			break;
		case 3:
			cerr << "Недостаточное количество элементов. Вычислить сумму невозможно. Повторите ввод.\nНажмите любую клавишу для продолжения..." << endl;
			system("pause > nul");
			break;
		case 0:
			return size;
		default:
			cerr << "Неизвестная ошибка. Повторите ввод." << endl;
			system("pause > nul");
			break;
		}
	} while (true);
}