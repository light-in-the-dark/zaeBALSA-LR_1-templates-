#include "Libraries.h"

int checkInputMatrixSize(int size)
{
	if (size <= 0)
		return 1;
	else if (size == 1)
		return 2;
	else if (size == 2)
		return 3;
	else
		return 0;
}

int checkInputMatrix(int **matrix, int size)
{
	int countOfNotNegRows = findAmountOfNegRows(matrix, size);

	if (countOfNotNegRows == size)
	{
		return 1;
	}
	else
	{
		return 0;
	}
}