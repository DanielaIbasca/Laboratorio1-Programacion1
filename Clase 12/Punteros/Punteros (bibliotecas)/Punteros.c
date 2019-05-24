#include <stdio.h>
#include <stdlib.h>

#include "Punteros.h"

void mostrarLetra(char* pLetra)
{
    if(pLetra != NULL)
    {
        printf("\nLa letra ingresada es: %c \n", *pLetra);
    }
}


int getCaracter(char* pLetra)
{
    int cargo= 0;

    if(pLetra != NULL)
    {
        printf("Ingrese una letra: ");
        fflush(stdin);
        scanf("%c", pLetra);
        cargo= 1;
    }

    return cargo;
}
