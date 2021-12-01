#include "Libraries.h"

int findProductOfRow(int **matrix, int size, int rowNum) 
{
    int production = 1;
    for (int i = 0; i < size; i++)
    {
        production *= matrix[rowNum][i];
    }
    return production;
}