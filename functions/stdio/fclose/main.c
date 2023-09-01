// Программа на применение функции fclose. При успешном закрытии функция возвращает 0, иначе возвращает ненулевое значениее соответствующее типу ошибки.

#include <stdio.h>
#include <stdlib.h>

int	main(void)
{
	FILE	*fp;

	if((fp = fopen("test", "rb")) == NULL){
		printf("File open error \n");
		exit (1);
	}

	if(fclose(fp))
		printf("File closing error \n");

	return 0;
}
