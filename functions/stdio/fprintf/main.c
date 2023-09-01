// #include <stdio.h>
// int fprintf(FILE *stream, const char *format, ...);
// Функция fprintf() выводит в поток, адресуемый параметром stream, значения аргументов, составляющих список аргументов, в соответствии с заданной строкой формата format. Возвращаемое значение равно количеству реально выведенных символов. Если при выводе возникла ошибка, возвращается отрицательное число.

// программа создает файл с названием TEST и записывает в него строку

#include <stdio.h>
#include <stdlib.h>

int	main(void)
{
	FILE	*fp;
	int		k;

	if((fp = fopen("test", "wb")) == NULL){
		printf("File open error\n");
		exit(1);
	}

	k = fprintf(fp, "This is test %d %f", 10, 20.100);
	printf("%d\n", k);
	fclose(fp);

	return 0;
}
