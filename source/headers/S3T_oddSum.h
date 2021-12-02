#pragma once

#include "Libraries.h"

// Поиск суммы нечетных элементов массива
template <typename T>
T findOddSum(T *arr, int n)
{
	cout << "Номера нечетных элементов: ";
	T oddSum = 0;
	for (int i = 0; i < n; i++)
	{
		if (i % 2 == 0)
		{
			cout << i + 1 << " ";
			oddSum += arr[i];
		}
	}
	cout << "\nСумма элементов с нечетными номерами: " << oddSum << endl;
	return oddSum;
}
