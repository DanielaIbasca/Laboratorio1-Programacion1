#include <stdio.h>
#include <stdlib.h>
#include "biblioteca.h"

void cargarArray(int array[], int tam)
{
    int i;
    for(i=0; i<tam; i++)
    {
        printf("Ingrese un numero: ");
        scanf("%d", &array[i]);
    }
}


void mostrarArray(int array[], int tam)
{
    int i;
    for(i=0; i<tam; i++)
    {
        printf("%d \n", array[i]);
    }
}


int buscarValor(int array[], int tam, int valor)
{
    int i;
    int indice= -1;

    for(i=0; i<tam; i++)
    {
        if(array[i] == valor)
        {
            indice= i;
            break;
        }
    }
    return indice;
}
