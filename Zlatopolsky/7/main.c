#include <stdio.h>
#include <stdbool.h>

/*
int	main(void)
{
	_Bool a, b, c;

	a = true;
	b = false;
	c = false;
	printf("b(false) and c(false) = %d\n", b && c);
	printf("a(true) or b(false) or c(false) = %d\n", a || b || c);
	printf("Not a(true) = %d\n", !a);
	printf("a(true) xor b(false) = %d\n", a ^ b);
	return 0;
}*/
/*
int	main(void)
{
	_Bool z;
	int x, y;
	
	printf("Enter the value x \n");
	scanf("%d", &x);
	printf("Enter the value y \n");
	scanf("%d", &y);
	z = (y > 1.5) || (x > 1 && x < 2.5 && y > -2 && y < 1.5);
	printf("z = %d\n", z);
}*/

#define SZ 6
// Поле 6х6 написано условие при котором вводим координаты 2х фигур и проверяем срубит ли первая фигура - ладья вторую. В случае z=1 она рубит вторую фигуру.
int	main(void)
{
	_Bool z;
	int a, b, c, d;
	
	printf("Enter the value a \n");
	scanf("%d", &a);
	printf("Enter the value b \n");
	scanf("%d", &b);
	printf("Enter the value c \n");
	scanf("%d", &c);
	printf("Enter the value d \n");
	scanf("%d", &d);
	z = (a<=SZ) && (a>0) && 
		(b<=SZ) && (b>0) &&
		(c<=SZ) && (c>0) &&
		(d<=SZ) && (d>0) &&
		(c!=a) && (d!=b) &&
		((c==a+1)&&(d==b+1))||((c==a+2)&&(d==b+2))||
		((c==a+3)&&(d==b+3))||((c==a+4)&&(d=b+4))||
		((c==a+5)&&(d==b+5))||
		((c==a-1)&&(d==b-1))||((c==a-2)&&(d==b-2))||
		((c==a-3)&&(d==b-3))||((c==a-4)&&(d==b-4))||
		((c==a-5)&&(d==b-5));
		printf("z = %d\n", z);
}
