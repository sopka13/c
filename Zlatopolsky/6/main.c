#include <stdio.h>
#include <stdlib.h>

// 2.12

int *k;

int	sum(int x)
{
	int	i, l;

	k = (int*)malloc(sizeof(int));
	if(!k){
		printf("No memory allocated");
		exit(1);
	}
	for(i=0; x>0; ++i){
		k = realloc(k, (i+1)*sizeof(int));
		if(!k){
			printf("No memory allocated");
			exit(1);
		}
		l = x%10;
		x = x/10;
		k[i] = l;
	}
	k[i] = 0;
	l = 0;
	for(--i; i>=0; --i)
		l = l + k[i];
	return l;
}

int product(int x)
{
	int	i, l;

	l = 1;
	for(--i; i>=0; --i)
		l = l * k[i];
	return l;
}

int	main(void)
{
	int	a;

	printf("Enter the a value\n");
	scanf("%d", &a);
	printf("The number of units in your number is equal to 		%d\n", a%10);
	printf("The number of tens in your room equal to		%d\n", (a/10)%10);
	printf("The sum of the digits of the entered number is		%d\n", sum(a));
	printf("The product of the digits of the entered number is	%d\n", product(a));
	return 0;
}
