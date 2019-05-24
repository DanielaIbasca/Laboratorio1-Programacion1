#include <stdio.h>
#include <stdlib.h>

#include "Punteros.h"

int main()
{
    int estado;
    char letra;
    char* pLetra= NULL;

    pLetra= &letra;

    estado= getCaracter(&letra);

    if(estado == 1)
    {
        printf("\nDato cargado.\n");
        mostrarLetra(&letra);
    }
    else
    {
        printf("\nDato no cargado.\n");
    }

    return 0;
}
