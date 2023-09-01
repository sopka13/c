#include <stdio.h>

int main(void)
{
    int k;  // number received on input
    int i;  // счетчик counter
    int d[10] = {0,0,0,0,0,0,0,0,0,0}; // an array of counts of different numbers

    printf("Enter the number\n");
    scanf("%d", &k);
    switch(k){
    case 0:
        d[0] = d[0] + 1;
        break;
    case 1:
        d[1] = d[1] + 1;
        break;
    case 2:
        d[2] = d[2] + 1;
        break;
    case 3:
        d[3] = d[3] + 1;
        break;
    case 4:
        d[4] = d[4] + 1;
        break;
    case 5:
        d[5] = d[5] + 1;
        break;
    case 6:
        d[6] = d[6] + 1;
        break;
    case 7:
        d[7] = d[7] + 1;
        break;
    case 8:
        d[8] = d[8] + 1;
        break;
    case 9:
        d[9] = d[9] + 1;
        break;
    }

    for(i=0; i<10; ++i){
        if(d[i] != 0)
            printf("%d = %d\n", i, d[i]);
    }
	return 0;
}
