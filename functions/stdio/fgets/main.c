// #include <stdio.h>
// char *fgets(char *str, int num, FILE *stream);
// Функция fgets() читает из входного потока stream не более num-1 символов и помещает их в массив символов, адресуемый указателем str. Символы читаются до тех пор, пока не будет прочитан символ новой строки или значение EOF, либо пока не будет достигнут заданный предел. По завершении чтения символов сразу же за последним из них размещается нулевой символ. Символ новой строки сохраняется и становится частью массива, адресуемого элементом str.

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char **argv)
{
	FILE	*fp;
	char	str[128];

	if((fp = fopen(argv[1], "r")) == NULL){
		printf("File open error\n");
		exit(1);
	}
	if(fgets(str, 10, fp))
		printf("%s", str);
	fclose(fp);

	return 0;
}
