#include <stdio.h>
#include <stdlib.h>

int main()
{
    int* puntero;
    int variable[5]= {2, 4, 6, 8, 10};

    puntero= variable;

    printf("Direcciones de memoria: \n");
    printf("%d \n", puntero);
    printf("%d \n", puntero+0);
    printf("%d \n", puntero+1);
    printf("%d \n", puntero+2);
    printf("%d \n", puntero+3);
    printf("%d \n", puntero+4);

    printf("\nValores: \n");
    //printf("%d \n", variable);
    printf("%d \n", variable[0]);
    printf("%d \n", variable[1]);
    printf("%d \n", variable[2]);
    printf("%d \n", variable[3]);
    printf("%d \n", variable[4]);

    return 0;
}
