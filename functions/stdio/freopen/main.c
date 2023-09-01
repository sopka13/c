// #include < stdio.h >
// FILE *freopen (const char *filename, const char *mode, FILE *stream);
// filename – указатель на строку содержащую имя (включая путь) открываемого файла.

// mode – указатель на строку содержащую режим доступа к открываемому файлу.

// stream – указатель на управляющую таблицу открытого потока данных для которого необходимо заменить файл.

// Возвращаемое значение: Указатель на управляющую таблицу открытого потока данных (аргумент stream), если открытие файла произошло успешно. NULL – если при открытии файла произошла ошибка. В переменную errno будет записан код ошибки.

// В первую очередь функция freopen закрывает файл, связанный с потоком stream, игнорируя ошибки, если они возникли при закрытии файла. Затем открывается файл, указанный аргументом filename с режимом доступа, указанным в аргументе mode. Открытый файл связывается с потоком данных указанным аргументом stream. В основном функция freopen используется для замены файла связанного со стандартными потоками ввода-вывода (stdin, stdout или stderr) или с пользовательскими потоками данных.

// В приведенной программе производится перенаправление стандартного вывода(stdout) с консоли в файл

#include <stdio.h>

int	main(void)
{
	FILE	*fp;

	printf("Test step 1\n");
	fp = freopen("Test", "w", stdout);
	printf("Test step 2\n");
	fclose(fp);

	return 0;
}
