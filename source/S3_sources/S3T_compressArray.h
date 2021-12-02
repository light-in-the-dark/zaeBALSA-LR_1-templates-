#pragma once

#include "Libraries.h"

// Сортировка массива вставками
template <typename T>
T* swapInArray(T *arr, int i, int j)
{
	T tmp = arr[i];
	arr[i] = arr[j];
	arr[j] = tmp;

	return arr;
}

// Сжатие и перестановка элементов массива и нулей
template <typename T>
void compressArray(T *arr, int size)
{
	T* tempArr = new T[size];

	for (int i = 0; i < size; i++)
	{
		tempArr[i] = arr[i];
		if (fabs((double)tempArr[i]) < 1)
		{
			tempArr[i] = 0;
		}
	}
	int i = 0;
	int j = 0;
	for (i = 0, j = 0; j < size; j++)
	{
		if (tempArr[j] != 0)
		{
			if (i < j)
			{
				swapInArray(tempArr, i, j);
			}
			i++;
		}
	}

	cout << "Измененный массив: ";
	for (int i = 0; i < size; i++)
	{
		cout << tempArr[i] << " ";
	}
	cout << endl;
	
	delete[] tempArr;
	return;
}
