// #include <stdio.h>
// size_t fread(void *buf, size_t size, size_t count, FILE *stream);
// Функция fread() читает из потока, адресуемого указателем stream, count объектов длиной size байт и размещает их в массиве buf. Затем указатель текущей позиции файла увеличивается на число, равное прочитанному количеству символов.

// В версии C99 к параметрам buf и stream применен квалификатор restrict.

// Функция fread() возвращает число реально прочитанных элементов. Если оказалось, что прочитано меньше элементов, чем требовалось при вызове, значит, либо произошла ошибка при выполнении операции, либо был достигнут конец файла. Определить, что именно произошло, можно с помощью функции feof() или ferror().

// Если поток открывается для операций в текстовом режиме, могут выполняться преобразования некоторых последовательностей символов, например, комбинация кодов возврата каретки (ASCII 13) и конца строки (ASCII 10) преобразуется в разделитель строк.

// Следующая программа записывает в дисковый файл с названием TEST пять чисел с плавающщй запятой, взяв их из массива bal. Затем она читает их из файла и записывает обратно в массив.

#include <stdio.h>
#include <stdlib.h>

int	main(void)
{
	FILE	*fp;
	float	bal[5] = {1.1F, 2.2F, 3.3F, 4.4F, 5.5F};
	int		i;

	if((fp = fopen("test", "wb")) == NULL){
		printf("File open error\n");
		exit(1);
	}

	if(fwrite(bal,  sizeof(float), 5, fp) != 5)
		printf("File write error\n");
	fclose(fp);

	if((fp = fopen("test", "rb")) == NULL){
		printf("File open error\n");
		exit(1);
	}
	if(fread(bal,  sizeof(float), 5, fp) != 5){
		if(feof(fp))
			printf("Prematurely reaching the end of the file\n");
		else
			printf("File read error\n");
	}
	fclose(fp);

	for(i = 0; i < 5; i++)
		printf("%f", bal[i]);

	return 0;
}
