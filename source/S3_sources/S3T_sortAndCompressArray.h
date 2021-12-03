#pragma once

#include "Libraries.h"

// Сжатие и сортировка массива вставками
template <typename T>
T *compressAndSortArray(T *prevArr, int size)
{
	// Создание нового массива и замена элементов <|1| на 0
	T *newArr = new T[size];
	for (int i = 0; i < size; i++)
	{
		newArr[i] = prevArr[i];

		if (fabs((double)newArr[i]) < 1)
			newArr[i] = 0;
	}

	int curIndex = 0;
	int newIndex = 0;
	for (curIndex = 0, newIndex = 0; curIndex < size; curIndex++)
	{
		if (newArr[curIndex] != 0)
		{
			if (curIndex > newIndex)
			{
				T tmp = newArr[newIndex];
				newArr[newIndex] = newArr[curIndex];
				newArr[curIndex] = tmp;
			}
			newIndex++;
		}
	}

	return newArr;
}

// Создание и вывод сжатого и отсортированного массива
template <typename T>
void outNewArray(T *arr, int size)
{
	T *sortedArr = compressAndSortArray(arr, size);

	cout << "Измененный массив: ";
	for (int i = 0; i < size; i++)
	{
		cout << sortedArr[i] << " ";
	}
	cout << endl;

	delete[] sortedArr;
	return;
}

