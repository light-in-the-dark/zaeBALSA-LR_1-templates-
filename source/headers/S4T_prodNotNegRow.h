#pragma once

#include "Libraries.h"

// Поиск произведения строки матрицы
template <typename T>
int findProductOfRow(T **matrix, int size, int rowNum)
{
    T production = 1;
    for (int i = 0; i < size; i++)
    {
        production *= matrix[rowNum][i];
    }
    cout << "Приозведение " << rowNum + 1
         << " строки = " << production << endl;
    return production;
}

// Проверка строки матрицы на наличие отрицательных элементов
template <typename T>
bool isRowWithoutNegatives(T **matrix, int size, int rowNum)
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

// Поиск произведения строк без отрицательных элементов
template <typename T>
void findProdOfNotNegRow(T **matrix, int size)
{
    for (int rowNum = 0; rowNum < size; rowNum++)
    {
        bool rowWithoutNegatives = isRowWithoutNegatives(matrix, size, rowNum);
        if (rowWithoutNegatives == true)
        {
            findProductOfRow(matrix, size, rowNum);
        }
    }
}