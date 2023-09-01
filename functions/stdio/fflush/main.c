// Пример программы использующей функцию fflush. Функция записывает в файл содержимое выходного буфера.

#include <stdio.h>
#include <unistd.h>

int	main(void)
{
	int	i = 0;

	while(1){
		printf("\r%d", i);
		fflush(stdout);			// сбрасывает буфер вывода
		sleep(1);				// ждет 1 секунду
		i++;
	}
	return 0;
}
