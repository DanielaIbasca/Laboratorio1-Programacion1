#include <stdio.h>
#include <stdlib.h>

int main()
{
    int edad;
    int retorno;

    do
    {
        printf("Ingrese una edad: ");
        fflush(stdin);
        retorno= scanf("%d", &edad);
    }
    while(retorno == 0);

    printf("\nLa respuesta es: %d\n", retorno);
    printf("\nLa edad es: %d\n", edad);

    return 0;
}
