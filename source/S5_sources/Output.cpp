#include "Libraries.h"

/*====================SEMINAR 5======================*/
char instructionsOutput(char code)
{
    cout << "Рядом с исполняемым файлом программы должен быть быть файл 'textfile.txt' с английским текстом.\nУчтите, что объем одного слова не должен превышать 100 символов.\nХотите ли вы, чтобы программа создала пустой файл сама? (y/n)" << endl;
    cin >> code;

    if (code == 'y')
    {
        textFile('c');
        cout << "Файл успешно создан. Пожалуйста, введите в него свои данные. Затем нажмите любую клавишу для продолжения..." << endl;
        system("pause > nul");
        return 'y';
    }
    else if (code == 'n')
        return 'n';

        return 'e';
}

void wordsResultOutput(int count, char *word)
{
    if (count > 0)
    {
        cout << count << ") " << word << endl;
    }
    else if (count == 0)
    {
        cout << "Нет слов, начинающихся на гласную букву, либо файл не найден." << endl;
    }
}