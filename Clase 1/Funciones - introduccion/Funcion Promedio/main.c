#include <stdio.h>
#include <stdlib.h>

float sacarPromedio(int, int);

int main()
{
    int numero;
    int suma= 0;
    int contador= 0;

    float promedio;

    while(contador<5)
    {
        printf("\nIngrese un numero: ");
        scanf("%d", &numero);
        suma= suma+numero;
        contador++;
    }
    promedio= sacarPromedio(suma, contador);
    printf("\nEl promedio es: %f \n", promedio);

    return 0;
}

float sacarPromedio(int suma, int contador)
{
    float retorno;
    retorno= (float)suma/contador;

    return retorno;
}
