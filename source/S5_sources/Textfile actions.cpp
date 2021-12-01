#include "Libraries.h"

void textFile(char action)
{
    switch (action)
    {
    case 'c':
    {
        ofstream oFile("textfile.txt");
        break;
    }
    case 'd':
    {
        remove("textfile.txt");
        break;
    }
    }
}