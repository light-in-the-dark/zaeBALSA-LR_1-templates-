#ifndef S3T_COMPRESSARRAY_H
#define S3T_COMPRESSARRAY_H

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
T* compressArray(T *arr, int n)
{
	for (int temp = 0; temp < n; temp++)
	{
		if (fabs((double)arr[temp]) < 1)
		{
			arr[temp] = 0;
		}
	}
	int i = 0;
	int j = 0;
	for (i = 0, j = 0; j < n; j++)
	{
		if (arr[j] != 0)
		{
			if (i < j)
			{
				swapInArray(arr, i, j);
			}
			i++;
		}
	}

	cout << "Измененный массив: ";
	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << " ";
	}
	cout << endl;
	
	return arr;
}

#endif