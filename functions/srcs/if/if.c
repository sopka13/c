#include <stdio.h>
#include <math.h>
/*
int main(void)
{
    double x, y;

    printf("Enter the x value\n");
    scanf("%lf", &x);
    if(x > 0)
        y = pow(sin(x), 2);
    else
        y = 1 - 2 * sin(pow(x, 2));
    printf("%lf\n", y);
    return 0;
}

int main(void)
{
    double x, y;

    printf("Enter the coordinates of the point:\nx = ");
    scanf("%lf", &x);
    printf("y = ");
    scanf("%lf", &y);
    if(y > 2 || y > x)
        printf("The entered point is in the first range");
    else
        printf("The entered point is in the second range");
    return 0;
}*/

int main(void)
{
    double x, y;

    printf("Enter the x value\n");
    scanf("%lf", &x);
    printf("Enter the y value\n");
    scanf("%lf", &y);
    if (x > y)
        printf("The first number is greater than the second");
    else
        printf("The first number is less than the second");
    return 0;
}
