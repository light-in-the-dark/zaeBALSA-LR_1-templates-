#include "Libraries.h"

void launchSeminar5()
{
    char choice = 'e';  // выбор пользователя о необходимости создать новый текстовый файл
    system("cls");
    getInfo(5);
    do
        choice = instructionsOutput(choice);
    while (choice == 'e');

    findVowelWords();
    
    cout << "Программа успешно завершена. Для выхода в меню нажмите любую клавишу..." << endl;
    system("pause > nul");
}
