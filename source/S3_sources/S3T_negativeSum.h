#pragma once

#include "Libraries.h"

// Поиск суммы между отрицательными элементами
template <typename T>
T findNegativeSum(T *arr, int n)
{
	int startIndex = findStartIndex(arr, n);
	int endIndex = findEndIndex(arr, n);
	T negativeSum = 0;
	for (int temp = startIndex + 1; temp < endIndex; temp++)
	{
		negativeSum += arr[temp];
	}

	cout << "Номера первого и последнего отрицательных элементов: " << startIndex + 1 <<" "<< endIndex + 1 << endl;
	cout << "Сумма чисел между отрицательными элементами: " << negativeSum << endl;
	return negativeSum;
}
