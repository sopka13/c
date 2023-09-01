// Программа предлагает на выбор ввести букву и при вводе Q выходит из программы. Пробуем применять функцию exit - аргумент 0 означает нормальное завершение программы, остальные аргументы указывают на ошибку какого либо рода.

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int	main(void)
{
	char choice;

	do {
		printf("Ввод имени (E)\n");
		printf("Удаление имени (D)\n");
		printf("Печать (P)\n");
		printf("Выход (Q)\n");
		choice = getchar();
	} while(!strchr("EDPQ", toupper(choice)));
	if(choice == 'Q') exit(0);

	return choice;
}
