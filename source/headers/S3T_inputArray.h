#ifndef S3T_INPUTARRAY_H
#define S3T_INPUTARRAY_H

#include "Libraries.h"

// Проверка введенного массива
template <typename T>
int checkInputArray(T *arr, int n)
{
	int startIndex = findStartIndex(arr, n);
	int endIndex = findEndIndex(arr, n);
	int amountOfNeg = 0; // количество отрицательных элементов
	for (int temp = 0; temp < n; temp++)
	{
		if (arr[temp] < 0)
		{
			amountOfNeg++;
		}
	}

	if (amountOfNeg == 0)
		return 1;

	else if (amountOfNeg == 1)
		return 2;

	else if (endIndex - startIndex == 1)
		return 3;

	else if (endIndex - startIndex == 2)
		return 4;

	else
		return 0;
}

// Ввод элементов массива
template <typename T>
T *inputArray(int size)
{
	cout << "Задан размер массива - " << size << endl;

	do
	{
		T *arr = new T[size];
		cout << "Введите элементы массива: ";
		for (int temp = 0; temp < size; temp++)
		{
			cin >> arr[temp];
			cin.clear();
			cin.ignore();
		}

		int flag = 0;
		flag = checkInputArray(arr, size);
		switch (flag)
		{
		case 1:
			cerr << "Нет отрицательных элементов. Невозможно вычислить сумму. Повторите ввод.\nНажмите любую клавишу для продолжения..." << endl;
			system("pause > nul");
			break;
		case 2:
			cerr << "Только один отрицательный элемент. Невозможно вычислить сумму. Повторите ввод.\nНажмите любую клавишу для продолжения..." << endl;
			system("pause > nul");
			break;
		case 3:
			cerr << "Два отрицательных элемента подряд. Невозможно вычислить сумму. Повторите ввод.\nНажмите любую клавишу для продолжения..." << endl;
			system("pause > nul");
			break;
		case 4:
			cerr << "Между отрицательными элементами только одно число. Невозможно вычислить сумму. Повторите ввод.\nНажмите любую клавишу для продолжения..." << endl;
			system("pause > nul");
			break;
		case 0:
		{
			cout << "Введенный массив: ";
			for (int i = 0; i < size; i++)
			{
				cout << arr[i] << " ";
			}
			cout << endl;
			return arr;
		}

		default:
			cerr << "Ошибка ввода. Повторите ввод.\nНажмите любую клавишу для продолжения..." << endl;
			system("pause > nul");
			break;
		}
	} while (true);
}

#endif