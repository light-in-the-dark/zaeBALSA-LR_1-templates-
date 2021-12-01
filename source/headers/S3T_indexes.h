#ifndef S3T_INDEXES_H
#define S3T_INDEXES_H

#include "Libraries.h"

// Поиск начального индекса
template <typename T>
int findStartIndex(T *arr, int n)
{
	int startIndex = -1;
	for (int temp = 0; temp < n; temp++)
	{
		if (arr[temp] < 0)
		{
			startIndex = temp;
			break;
		}
	}
	return startIndex;
}

// Поиск конечного индекса
template <typename T>
int findEndIndex(T *arr, int n)
{
	int endIndex = -1;
	for (int temp = 0; temp < n; temp++)
	{
		if (arr[temp] < 0)
		{
			endIndex = temp;
		}
	}
	return endIndex;
}

#endif