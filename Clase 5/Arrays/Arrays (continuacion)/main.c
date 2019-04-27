#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    int i;
    int tam;

    int nota[10];
    char usuario[10][10];

    printf("Ingrese usuario: ");
    scanf("%s", usuario[0]);
    printf("Ingrese usuario: ");
    scanf("%s\n", usuario[1]);

    //Busca el /0, muestra el tamaño del array.
    tam= strlen(usuario[0]);
    printf("Tamaño: %d\n", tam);

    for(i=0; i<10; i++)
    {
        printf("Usuario %s Nota: %d\n", usuario[i], nota[i]);
    }

    return 0;
}
