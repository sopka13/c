#include <stdio.h>
#include <math.h>
/*
int main(void)
{
    float   a, b, c;

    printf("Enter the a value\n");
    scanf("%f", &a);
    printf("Enter the b value\n");
    scanf("%f", &b);

    c = remainderf(a, b);
    if (c >= 0.0001)
        printf("Number a is not divisible by b without remainder");
    else
        printf("Number a is divisible by b without remainder");
    return 0;
}*/

// The program determines whether the entered number ends with the digit 7
int main(void)
{
    char    a[10];
    int     i, c, b, e, k;
    float   d = 0;

    printf("Enter the a value\n");
    for(i=0; (c = getchar()) != EOF && c != '\n'; ++i){
        a[i] = c;
        if(c == '.')
            b = i;
    }
    e = i;
    if(a[--i] == '7')
        printf("The last digit is 7\n");
    else
        printf("The last digit is not 7\n");
    for(i=0; i < b; ++i)
        d = (d * 10) + (a[i] - '0');
    i += 1;
    for(; i < e; ++i)
        d = (d*10) + (a[i] - '0');
    k = e - b - 1;
    printf("%.3f\n", d/(pow(10, k)));
    return 0;
}
