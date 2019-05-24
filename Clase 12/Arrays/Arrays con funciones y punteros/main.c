#include <stdio.h>
#include <stdlib.h>

void mostrarArray(int*, int);

int main()
{
    int* puntero;
    int vectorEnteros[5]= {2, 4, 6, 8, 10};

    mostrarArray(vectorEnteros, 5);

    return 0;
}


void mostrarArray(int* pArray, int tam)
{
    int i;
    for(i=0; i<tam; i++)
    {
        printf("%d \n", *(pArray+i)); //variable[i]
    }
}
