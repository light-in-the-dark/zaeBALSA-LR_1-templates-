#pragma once

#include "Libraries.h"

// Поиск суммы нечетных элементов массива
template <typename T>
T findOddSum(T *arr, int n)
{
	T oddSum = 0;
	for (int temp = 0; temp < n; temp++)
	{
		if (temp % 2 == 0)
		{
			oddSum += arr[temp];
		}
	}
	cout << "Сумма элементов с нечетными номерами: " << oddSum << endl;
	return oddSum;
}
