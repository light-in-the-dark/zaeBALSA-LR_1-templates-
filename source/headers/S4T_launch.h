#pragma once

#include "Libraries.h"

// Запуск четвертого семинара
template <typename T>
void launchSeminar4(T type)
{
    system("cls");
    getInfo(4);

    int size = inputMatrixSize(); //размерность квадратной матрицы

    T **matrix = inputMatrix<T>(size);

    do
    {
        int choice = 0;
        cout << "Выберите действие, которое необходимо сделать с матрицей (1/2) или 0 для выхода в меню: ";
        cin >> choice;
        cin.clear();
        cin.ignore();

        switch (choice)
        {
        case 1:
            findProdOfNotNegRow(matrix, size);
            break;
        case 2:
            findMaxDiagonalsSum(matrix, size);
            break;
        case 0:
            for (int i = 0; i < size; i++)
            {
                delete[] matrix[i];
            }
            delete[] matrix;
            return;
        default:
            cout << "Ошибка. Повторите ввод.\nНажмите любую клавишу...";
            system("pause > nul");
        }
    } while (true);
}