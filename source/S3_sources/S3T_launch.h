#pragma once
#include "Libraries.h"

// Запуск третьего семинара
template <typename T>
void launchSeminar3(T type)
{
	system("cls");
	getInfo(3);

	int arrSize = inputArraySize();

	T *arr = inputArray<T>(arrSize);

	do
	{
		int choice = 0;
		cout << "Выберите действие, которое необходимо сделать с массивом (1/2/3) или 0 для выхода в меню: ";
		cin >> choice;
		cin.clear();
		cin.ignore();

		switch (choice)
		{
		case 1:
			findOddSum(arr, arrSize);
			break;
		case 2:
			findNegativeSum(arr, arrSize);
			break;
		case 3:
			compressArray(arr, arrSize);
			break;
		case 0:
			delete[] arr;
			return;
		default:
			cout << "Ошибка. Повторите ввод.\nНажмите любую клавишу...";
			system("pause > nul");
		}
	} while (true);
}
