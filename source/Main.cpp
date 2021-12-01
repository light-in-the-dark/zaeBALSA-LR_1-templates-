#include "Libraries.h"

int main()
{
	system("chcp 65001"); // установка кодировки UTF-8

	int code = 0;
	do
	{
		code = menu();
	} while (code != 0);

	return 0;
}