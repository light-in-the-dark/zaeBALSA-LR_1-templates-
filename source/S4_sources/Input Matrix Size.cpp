#include "Libraries.h"

int inputMatrixSize()
{
    do
    {
        int size = 0, flag = 0;
        cout << "Введите размерность квадратной матрицы: ";
        cin >> size;
        cin.clear();
        cin.ignore();

        
        if (size <= 0)
            flag = 1;
        else if (size == 1)
            flag = 2;
        else if (size == 2)
            flag = 3;
        else
            flag = 0;

        switch (flag)
        {
        case 1:
            cerr << "Размер матрицы не может быть меньше или равен нулю. Повторите ввод.\nНажмите любую клавишу для продолжения..." << endl;
            system("pause > nul");
            break;
        case 2:
            cerr << "Размер матрицы не может быть равен единице. Повторите ввод.\nНажмите любую клавишу для продолжения..." << endl;
            system("pause > nul");
            break;
        case 3:
            cerr << "Размер матрицы не может быть равен двум, так как нужно вычислить сумму диагоналей. Повторите ввод.\nНажмите любую клавишу для продолжения..." << endl;
            system("pause > nul");
            break;
        case 0:
            return size;
        default:
            cerr << "Некорректный размер. Повторите ввод.\nНажмите любую клавишу для продолжения..." << endl;
            system("pause > nul");
            break;
        }
    } while (true);
}