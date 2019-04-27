#include <stdio.h>
#include <stdlib.h>

#include "Punteros.h"

int main()
{
    int miDato= 333;

    cambiarValor(miDato);
    printf("Mi dato es: %d\n", miDato);

    cambiarValorReferencia(&miDato);
    printf("Mi dato es: %d\n\n", miDato);

    return 0;
}
