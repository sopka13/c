#include <stdio.h>

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
}
