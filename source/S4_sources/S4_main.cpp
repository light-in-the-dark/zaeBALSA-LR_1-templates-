#include "Libraries.h"

void launchSeminar4()
{
    system("cls");
    getInfo(4);

    int size = 0; //размерность квадратной матрицы
    do
    {
        size = inputMatrixSize(0);
    } while (size == -1);

    int **matrix = new int *[size];
    for (int i = 0; i < size; i++)
    {
        matrix[i] = new int[size];
    }

    int matrixIsValid = 0;
    do
    {
        matrixIsValid = inputMatrix(matrix, size);
    } while (matrixIsValid == -1);
    
    matrixOutput(matrix, size);

    for (int rowNum = 0; rowNum < size; rowNum++)
    {
        bool rowWithoutNegatives = isRowWithoutNegatives(matrix, size, rowNum);
        if (rowWithoutNegatives == true)
        {
            prodOutput(findProductOfRow(matrix, size, rowNum), rowNum);
        }
    }

    int maxSum = findMaxDiagonalsSumm(matrix, size);
    maxSumOutput(maxSum);
    
    delete[] matrix;
    cout << "Программа успешно завершена. Для выхода в меню нажмите любую клавишу..." << endl;
    system("pause > nul");
}