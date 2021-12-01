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

	// int n = 0; // длина массива
	// do
	// {
	// 	n = inputArrayLenght();
	// } while (n == -1);

	// T *array = new T[n];

	// int arrIsValid = 0; // для проверки массива на корректность
	// arrIsValid = inputArray(array, n);
	// while (arrIsValid == -1)
	// {
	// 	delete[] array;
	// 	T *array = new T[n];
	// 	arrIsValid = inputArray(array, n);
	// }

	// T oddSum = findOddSum(array, n);
	// T negSum = findNegativeSum(array, n);

	// compressArray(array, n);

	// arrayOutput(array, n, oddSum, negSum);

	// delete[] array;
	// cout << "Программа успешно завершена. Для выхода в меню нажмите любую клавишу..." << endl;
	// system("pause > nul");
}
