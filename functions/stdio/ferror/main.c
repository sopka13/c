// Пример применения функции ferror. Проверяет наличие ошибок при работе с файлом, связанным с потоком stream. нулевое занчение говорит о том что никакой ошибки не обнаружено, не нулевое говорит об ошибке. что бы понять что за ошибка нужно воспользоваться функцией perror.

#include <stdio.h>

int	main(void)
{
	if(ferror(fp)){		// фрагмент программы проверяет нет ли ошибки
		printf("Ошибка при работе с фалом\n");
		exit(1);
	}
}
