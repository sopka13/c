#include <stdio.h>

int	main(void)
{
	FILE	*mf;	// Переменная в которую будет сохранен указатель на управляющую таблицу открываемого потока данных;
	int		err;	// Переменная в которую будем заносить информацию о наличии ошибок
	char a[] = "Новая строка"; // то что мы будем записывать в файл

	printf("Открытие файла: ");
	mf = fopen("/home/sergey/My_prog/c/Kernighan B. W. The C programming language/functions/stdio/clearerr/test", "a");	// открытие файла на чтение

	if (mf == NULL)					// проверка открытия файла
		printf("ошибка\n");
	else
		printf("выполнено\n");

	fprintf(mf, "%s", a);	// запись даных в файл
	err = ferror(mf);				// определение наличия ошибок
	printf ("err = %d\n", err);
	if (err == 1)
		printf("Есть ошибки в работе с потоком донных \n");
	else
		printf("Ошибок в работе с файлом нет \n");
	
	printf("Сброс индикатора ошибок потока даных err = %d\n", err);
	clearerr(mf);					// сбрасывает индикатор ошибок на 0

	err = ferror(mf);				// определение наличия ошибок
	if (err == 1)
		printf("Есть ошибки работы с потоком данных err = %d\n", err);
	else
		printf("Ошибок работы с файлом нет \n");
	
	printf("Закрытие файла \n");
	if (fclose(mf) == EOF)
		printf("File closing error\n");
	else
		printf("Done\n");
	
	return 0;
}
