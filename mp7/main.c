#include <stdio.h>

int main(void)
{
	int	a[10];
	int	b = 0;

	printf("Введите 10 чисел\n");
	for(int i=0; i<=9; ++i){
		scanf("%d", &a[i]);
	}
	for(int i=0; i<=9; ++i){
		b = b + a[i];
	}
	printf("%d\n", b);
	return 0;
}
