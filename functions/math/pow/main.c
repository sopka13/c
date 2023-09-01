#include <stdio.h>
#include <math.h>

int main(void)
{
    double x = 3, y = 2, result;

    result = pow(x,y);
    printf("%.2f в степени %.2f равно : %.2f\n", x, y, result);
    return 0;
}
