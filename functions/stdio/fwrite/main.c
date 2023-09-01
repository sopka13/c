// #include <stdio.h>
// size_t fwrite(const void *buf, size_t size, size_t count, FILE *stream);
// Функция fwrite() записывает в поток, адресуемый указателем stream, count объектов длиной size байтов каждый из массива символов, адресуемого указателем buf. Затем указатель текущей позиции файла перемещается вперед на записанное количество символов.

// В версии C99 к параметрам buf и stream применен квалификатор restrict.

// Функция fwrite() возвращает число реально записанных элементов, которое при успешном выполнении функции будет равно числу затребованных элементов. Если же элементов записано меньше, чем указано при вызове, произошла ошибка.

// Данная программа записывает в файл TEST число с плавающей точкой (значение переменной f). Обратите внимание, что оператор sizeof используется и для определения количества байтов, занимаемых переменной с плавающей точкой, а также чтобы обеспечить переносимость.

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	  FILE *fp;
	  float f = 12.23;

	  if((fp = fopen("test", "wb")) == NULL) {
	      printf("Не удается открыть файл.\n");
	      exit(1);
	  }

	  fwrite(&f, sizeof(float), 1, fp);
	  fclose(fp);

	  return 0;
} 