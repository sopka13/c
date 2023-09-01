// #include <stdio.h>
// long int ftell(FILE *stream);
// Функция ftell() возвращает текущее значение указателя позиции файла для заданного потока. В случае двоичных потоков это значение равно количеству байтов, которые отделяют указатель от начала файла. Для текстовых потоков возвращаемое значение может не иметь определенной интерпретации за исключением случая, когда оно является аргументом функции fseek(). Все дело в возможных преобразованиях символов, когда, например, комбинация кодов возврата каретки (ASCII 13) и конца строки (ASCII 10) заменяются разделителем строк, что влияет на размер файла.

// При возникновении ошибки функция ftell() возвращает значение -1.

// Данный фрагмент программы считывает текущее значение указателя позиции файла, связанного с потоком, который задается параметром fp.

long int i;

if((i=ftell(fp)) == -1L)
	  printf("Возникла ошибка при обработке файла.\n");
