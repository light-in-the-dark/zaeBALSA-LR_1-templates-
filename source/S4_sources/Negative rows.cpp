#include "Libraries.h"

int findAmountOfNegRows(int **matrix, int size)
{
	int countOfNotNegRows = 0; // количество строк без отрицательных элементов
	for (int i = 0; i < size; i++)
	{
		for (int j = 0; j < size; j++)
		{
			if (matrix[i][j] < 0)
			{
				countOfNotNegRows++;
				break;
			}
		}
	}
	return countOfNotNegRows;
}

bool isRowWithoutNegatives(int **matrix, int size, int rowNum)
{
	for (int i = 0; i < size; i++)
	{
		if (matrix[rowNum][i] < 0)
		{
			return false;
		}
	}
	return true;
}