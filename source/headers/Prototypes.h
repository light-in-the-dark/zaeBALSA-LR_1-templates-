#pragma once

/*====================MENU======================*/
// Главное меню
int menu();
// Информация о заданиях семинара
void getInfo(int flag);
// Запуск третьего семинара
// void launchSeminar3();
// Запуск четвертого семинара
void launchSeminar4();
// Запуск пятого семинара
void launchSeminar5();
// Выбор типа данных для работы программы
char chooseTypeOfNumbers();

/*====================SEMINAR 3======================*/
// Ввод длины массива
int inputArraySize();
#include "S3T_indexes.h"
#include "S3T_inputArray.h"
#include "S3T_oddSum.h"
#include "S3T_negativeSum.h"
#include "S3T_compressArray.h"


// Ввод элементов массива
// int inputArray(float *arr, int n);
// Проверка ввода элементов массива
// int checkInputArray(float *arr, int n);
// Поиск суммы нечетных элементов
// float findOddSum(float *arr, int n);
// Поиск суммы между отрицательными элементами
// float findNegativeSum(float *arr, int n);
// Сортировка массива
// float* swap(float *arr, int i, int j);
// Сжатие массива
// float* compressArray(float *arr, int n);
// Поиск начального индекса
// int findStartIndex(float *arr, int n);
// Поиск конечного индекса
// int findEndIndex(float *arr, int n);

#include "S3T_launch.h"

/*====================SEMINAR 4======================*/
// Ввод размера матрицы
int inputMatrixSize(int size);
// Проверка размера матрицы
int checkInputMatrixSize(int size);
// Ввод элементов матрицы
int inputMatrix(int **matrix, int size);
// Проверка элементов матрицы
int checkInputMatrix(int **matrix, int size);
// Поиск количества строк без отрицательных элементов
int findAmountOfNegRows(int **matrix, int size);
// Поиск произведения элементов в строке без отрицательных элементов
int findProductOfRow(int **matrix, int size, int rowNum);
// Проверка строки матрицы на наличие отрицательных элементов
bool isRowWithoutNegatives(int **matrix, int size, int rowNum);
// Поиск максимума среди сумм элементов побочных диагоналей
int findMaxDiagonalsSumm(int **matrix, int size);
// Вывод матрицы
void matrixOutput(int **matrix, int size);
// Вывод произведения строки
void prodOutput(int prod, int rowNum);
// Вывод максимальной суммы элементов побочных диагоналей
void maxSumOutput(int maxSum);



/*====================SEMINAR 5======================*/
// Действия с текстовым файлом (c - создать, d - удалить)
void textFile(char action);
// Вывод инструкции для пользователя
char instructionsOutput(char code);
// Поиск слов, начинающихся с гласных английских букв
void findVowelWords();
// Является ли буква гласной
bool charIsVowel(char ch);
// Вывод сообщения-результата проверки слов
void wordsResultOutput(int count, char* word);
