#include "Libraries.h"

bool charIsVowel(char ch)
{
    if (ch == 'A' || ch == 'a' || ch == 'E' || ch == 'e' || ch == 'Y' || ch == 'y' || ch == 'U' || ch == 'u' || ch == 'I' || ch == 'i' || ch == 'O' || ch == 'o')
    { 
        return true;
    }
    return false;
}

void findVowelWords() 
{
    ifstream in("textfile.txt");

    char word[100];
    int amountOfWovelWords = 0; // количество слов, начинающихся с гласных букв

    while (in >> word)
    {
        if (charIsVowel(word[0]) == true)
        {
            amountOfWovelWords++;
            wordsResultOutput(amountOfWovelWords, word);
        }
    }

    if (amountOfWovelWords == 0)
    {
        wordsResultOutput(amountOfWovelWords, word);
    }
}