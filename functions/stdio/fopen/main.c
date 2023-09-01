// Программа открывает файл функцией fopen и выводит на экран содержимое

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int		ch;
	FILE	*fp;

	if((fp = fopen("test", "rb")) == NULL){
		printf("I can't open file \n");
		exit(1);
	}

	while(!feof(fp) && !ferror(fp)){
		ch = getc(fp);
		if(ch != EOF)
			putchar(ch);
	}

	if(fclose(fp))
		printf("File closing error \n");
	
	return 0;
}
