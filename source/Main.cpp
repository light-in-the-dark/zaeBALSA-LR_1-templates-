#include "Libraries.h"

int main()
{
	system("chcp 65001"); // установка кодировки UTF-8

	int code = 1;
	do
	{
		code = menu();
	} while (code != 0);

	return 0;
}