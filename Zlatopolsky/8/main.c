#include <stdio.h>
#include <stdlib.h>
#include <math.h>
// Показывает остаток от деления вещественных чисел
/*
int main(void)
{
    float a, b, c;

    printf("Enter the a value\n");
    scanf("%f", &a);
    printf("Enter the b value\n");
    scanf("%f", &b);
    printf("%4.3f %% %4.3f = %4.3f", a, b, c = remainder(a, b));
    return 0;
}*/

// Дано число инт - сравниваем числа составляющие его. Выводим  какое число больше всех и равны ли они.

int *k; // Массив для записии чисел

int main(void)
{
    int a;  // number received on input
    int i;  // счетчик counter
    int b;  // maximum number
    int c;  // number of maximum number
    int d[10] = {0,0,0,0,0,0,0,0,0,0}; // an array of counts of different numbers

    printf("Enter an integer\n");
    scanf("%d", &a);

    k = (int*)malloc(sizeof(int));
	if(!k){
		printf("No memory allocated");
		exit(1);
	}
	if(a != 0){
        for(i=0; a>0; ++i){
            k = realloc(k, (i+1)*sizeof(int));
            if(!k){
                printf("No memory allocated");
                exit(1);
            }
            k[i] = a%10;
            a = a/10;
        }
        k = realloc(k, i*sizeof(int));
	}
	else
        k[0] = 0;
    b = 0;
    c = 1;
    for(i=0; k[i]; ++i){
        if(k[i] > b){
            b = k[i];
            c = i + 1;
        }
        switch(k[i]){
        case 0:
            d[0] = d[0] + 1;
            continue;
        case 1:
            d[1] = d[1] + 1;
            continue;
        case 2:
            d[2] = d[2] + 1;
            continue;
        case 3:
            d[3] = d[3] + 1;
            continue;
        case 4:
            d[4] = d[4] + 1;
            continue;
        case 5:
            d[5] = d[5] + 1;
            continue;
        case 6:
            d[6] = d[6] + 1;
            continue;
        case 7:
            d[7] = d[7] + 1;
            continue;
        case 8:
            d[8] = d[8] + 1;
            continue;
        case 9:
            d[9] = d[9] + 1;
            continue;
        }
    }
    printf("The maximum number is %d under number %d\n", b, c);
    printf("Amount of numbers using when writing the number:\n");
    for(i=0; i<10; ++i){
        if(d[i] != 0)
            printf("%d = %d\n", i, d[i]);
    }
	return 0;
}
