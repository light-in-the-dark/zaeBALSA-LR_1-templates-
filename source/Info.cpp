#include "Libraries.h"

void getInfo(int flag)
{
    if (flag == 0)
    {
        cout << "Лабораторная работа №2, вариант 4.\n"
             << "В этой работе представлены решения для семинаров №3, №4, №5 с использованием шаблонов функций.\n"
             << "\nПожалуйста, введите номер нужного семинара или 0 для завершения работы программы: ";
    }
    else if (flag == 3)
    {
        cout << "Для однородного массива, состоящего из n элементов доступны действия:\n"
             << "\t1) вычислить сумму элементов массива с нечетными номерами;\n"
             << "\t2) вычислить сумму элементов массива, расположенных между первым и последним отрицательными элементами.\n"
             << "\t3) сжать массив, удалив из него все элементы, модуль которых не превышает 1. Освободившиеся в конце массива элементы заполнить нулями.\n"
             << "\nПРИМЕЧАНИЕ: при попытке ввода нечислового знака (буква или символ) он будет заменен на 0.\n"
             << "====================================================================================="
             << endl;
    }
    else if (flag == 4)
    {
        cout << "Дана квадратная матрица.\nОпределить:\n"
             << "\t1) произведение элементов в тех строках, которые не содержат отрицательных элементов;\n"
             << "\t2) максимум среди сумм элементов диагоналей, параллельных главной диагонали матрицы.\n"
             << "\nПРИМЕЧАНИЕ: при попытке ввода нечислового знака (буква или символ) он будет заменен на 0.\n"
             << "=====================================================================================" 
             << endl;
    }

    else if (flag == 5)
    {
        cout << "Написать программу, которая считывает английский текст из файла и выводит на экран слова, начинающиеся с гласных букв.\n"
             << "=====================================================================================" 
             << endl;
    }
}