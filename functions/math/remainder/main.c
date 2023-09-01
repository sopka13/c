#include <stdio.h>
#include <math.h>

// remainder выводит остаток от деления вещественных типов

int main(void)
{
    float a, b, c;

    printf("Enter the a value\n");
    scanf("%f", &a);
    printf("Enter the b value\n");
    scanf("%f", &b);
    printf("%4.3f %% %4.3f = %4.3f", a, b, c = remainder(a, b));
    return 0;
}
