#include "Libraries.h"

// Выбор типа данных
char chooseTypeOfNumbers()
{
    do
    {
        char type = 0; // тип числовых данных
        cout << "Выберите тип числовых данных для дальнейшей работы программы.\n"
             << "int = \"i\"\n"
             << "float = \"f\"\n"
             << "double = \"d\"\n";
        cin >> type;

        if (type == 'i')
        {
            cout << "Выбран тип данных int" << endl;
            return 'i';
        }
        else if (type == 'f')
        {
            cout << "Выбран тип данных float" << endl;
            return 'f';
        }
        else if (type == 'd')
        {
            cout << "Выбран тип данных double" << endl;
            return 'd';
        }
        else
            cout << "Некорректный тип данных. Повторите ввод." << endl;
    } while (true);
}