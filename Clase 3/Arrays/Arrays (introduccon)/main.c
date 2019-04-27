#include <stdio.h>
#include <stdlib.h>

int main()
{
    char palabra[10];

    int indice= 0;

    scanf("%s", &palabra);
    fflush(stdin);
    printf("Palabra: %s\n\n", palabra);

    while(indice < 20)
    {
        if(palabra[indice] == '\0') //Encuentra el espacio.
        {
            printf("El barra 0 esta en: %d", indice);
        }
        printf("Letra: %c\n", palabra[indice]);
        indice++;
    }

    return 0;
}
