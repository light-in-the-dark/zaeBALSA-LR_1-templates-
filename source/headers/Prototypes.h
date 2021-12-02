#pragma once

/*====================MENU======================*/
// Главное меню
int menu();
// Информация о заданиях семинара
void getInfo(int flag);
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

#include "S3T_launch.h"



/*====================SEMINAR 4======================*/
// Ввод размера матрицы
int inputMatrixSize();

#include "S4T_inputMatrix.h"
#include "S4T_prodNotNegRow.h"
#include "S4T_diagonalSum.h"

#include "S4T_launch.h"




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
