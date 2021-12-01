#include "Libraries.h"

int findMaxDiagonalsSumm(int **matrix, int size)
{
    int tmp_size = 2;    // длина самой короткой побочной диагонали
    int iter = size - 2; // количество итераций для матрицы
    int sum = 0;
    int maxSum = 0;

    while (iter > 0)
    {
        sum = 0;
        for (int i = 0, j = iter; i < tmp_size; i++, j++)
        {
            sum += matrix[i][j];
        }
        if (maxSum < sum)
        {
            maxSum = sum;
        }

        sum = 0;
        for (int i = 0, j = iter; i < tmp_size; i++, j++)
            sum += matrix[j][i];
        if (maxSum < sum)
            maxSum = sum;

        tmp_size++;
        iter--;
    }
    return maxSum;
}