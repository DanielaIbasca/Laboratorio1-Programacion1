#include <stdio.h>
#include <stdlib.h>

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
    promedio= (float)suma/contador;
    printf("\nEl promedio es: %f \n", promedio);

    return 0;
}
