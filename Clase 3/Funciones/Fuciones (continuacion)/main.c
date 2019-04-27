#include <stdio.h>
#include <stdlib.h>

int dividir(int);
int distintoACero(int);

int main()
{
    int dato;

    dato= dividir(6);

    printf("El resultado es: %d\n", dato);
    dato= dividir(0);
    printf("El resultado es: %d\n\n", dato);

    return 0;
}


int dividir(int numero)
{
    int respuesta;
    int resultado;

    respuesta= distintoACero(numero);
    if(respuesta == 1)
    {
        resultado= numero/2;
    }

    return respuesta;
}


int distintoACero(int numero)
{
    if(numero != 0)
    {
        return 1;
    }
    return 0;
}
