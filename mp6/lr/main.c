#include <stdio.h>
#include <math.h>

int	main(void)
{
	double	x, y;

	printf("Enter the x value\n");
	scanf("%lf", &x);
	y = sqrt(((2 * x) + sin(fabs(3 * x))) / 3.56);
	printf("%lf\n", y);
	return 0;
}
