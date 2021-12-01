#include "Libraries.h"

/*====================SEMINAR 3======================*/




/*====================SEMINAR 4======================*/
int inputMatrixSize(int size)
{
	cout << "Введите размерность квадратной матрицы: ";
	cin >> size;
	cin.clear();
	cin.ignore();

	int flag = 0;
	flag = checkInputMatrixSize(size);
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
	return -1;
}

int inputMatrix(int **matrix, int size)
{
	cout << "Задан размер матрицы - " << size << endl;
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
		return 0;
	default:
		cerr << "Ошибка ввода. Повторите ввод.\nНажмите любую клавишу для продолжения..." << endl;
		system("pause > nul");
		break;
	}
	return -1;
}