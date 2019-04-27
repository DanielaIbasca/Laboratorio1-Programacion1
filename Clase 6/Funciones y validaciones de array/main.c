#include <stdio.h>
#include <stdlib.h>
#include "biblioteca.h"

#define T 5 //Directiva del precompilador.

int main()
{
    int indice;
    int miArray[T]= {};

    cargarArray(miArray, T);
    mostrarArray(miArray, T);
    indice= buscarValor(miArray, T, 5);

    if(indice != -1)
    {
        printf("\nEl indice es: %d\n", indice);
    }
    else
    {
        printf("\nValor inexistente.\n");
    }

    return 0;
}
