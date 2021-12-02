#pragma once

#include "Libraries.h"

// Поиск количества строк без отрицательных элементов
template <typename T>
int findAmountOfNotNegRows(T **matrix, int size)
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


// Проверка элементов матрицы
template <typename T>
int checkInputMatrix(T **matrix, int size)
{
    int countOfNotNegRows = findAmountOfNotNegRows(matrix, size);

    if (countOfNotNegRows == size)
        return 1;
    else
        return 0;
}

// Ввод элементов матрицы
template <typename T>
T **inputMatrix(int size)
{
    cout << "Задан размер матрицы - " << size << endl;

    do
    {
        T **matrix = new T *[size];
        for (int i = 0; i < size; i++)
        {
            matrix[i] = new T[size];
        }

        for (int i = 0; i < size; i++)
        {
            cout << "Введите элементы " << i + 1 << " строки матрицы: ";
            for (int j = 0; j < size; j++)
            {
                cin >> matrix[i][j];
                cin.clear();
                cin.ignore();
            }
        }

        int flag = 0;
        flag = checkInputMatrix(matrix, size);

        switch (flag)
        {
        case 1:
            cerr << "В матрице нет строк без отрицательных элементов. Невозможно вычислить произведение. Повторите ввод.\nНажмите любую клавишу для продолжения..." << endl;
            system("pause > nul");
            break;
        case 0:
            cout << "Введенная матрица: " << endl;
            for (int i = 0; i < size; i++)
            {
                for (int j = 0; j < size; j++)
                {
                    cout << matrix[i][j] << " ";
                }
                cout << endl;
            }
            return matrix;
        default:
            cerr << "Ошибка ввода. Повторите ввод.\nНажмите любую клавишу для продолжения..." << endl;
            system("pause > nul");
            break;
        }

        for (int i = 0; i < size; i++)
        {
            delete[] matrix[i];
        }
        delete[] matrix;

    } while (true);
}