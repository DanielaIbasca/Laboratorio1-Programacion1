#include <stdio.h>
#include <stdlib.h>

#include "Funciones y biblioteca.h"

int main()
{
    int dato;
    int unFactorial;

    dato= dividir(6);
    unFactorial= factorial(4);

    printf("El resultado es: %d\n", dato);
    dato= dividir(0);
    printf("El resultado es: %d\n", dato);

    printf("El factorial es: %d\n\n", unFactorial);

    return 0;
}
